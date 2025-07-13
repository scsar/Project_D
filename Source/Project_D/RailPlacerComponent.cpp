// Fill out your copyright notice in the Description page of Project Settings.


#include "RailPlacerComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "RailSegment.h"
#include "Components/SplineComponent.h"

URailPlacerComponent::URailPlacerComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void URailPlacerComponent::BeginPlay()
{
    Super::BeginPlay();

    // 초기 Segment 하나 생성 (테스트 시작 위치)
    if (!LastPlacedSegment)
    {
        FActorSpawnParameters Params;
        Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        LastPlacedSegment = GetWorld()->SpawnActor<ARailSegment>(ARailSegment::StaticClass(), GetOwner()->GetActorTransform(), Params);
    }
}

void URailPlacerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    // 레벨이 끝나면 GhostRail이 남아있지 않도록 정리
    if (GhostRail)
    {
        GhostRail->Destroy();
        GhostRail = nullptr;
    }
    Super::EndPlay(EndPlayReason);
}

void URailPlacerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (bIsPlacing)
    {
        UpdateGhostPreview();
    }
}

void URailPlacerComponent::StartPlacement()
{
    bIsPlacing = true;

    // GhostRailClass가 지정되어 있고, 아직 GhostRail이 없다면 스폰합니다.
    if (GhostRailClass && !GhostRail)
    {
        FActorSpawnParameters Params;
        Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        GhostRail = GetWorld()->SpawnActor<AActor>(GhostRailClass, GetOwner()->GetActorTransform(), Params);
    }

    // 스폰된 고스트가 있다면 즉시 위치를 업데이트하여 보여줍니다.
    if (GhostRail)
    { 
        UpdateGhostPreview();
    }
}

void URailPlacerComponent::ConfirmPlacement()
{
    PlaceRail();
    YawOffset = 0.f;
    bIsPlacing = false;

    // 미리보기가 더 이상 필요 없으므로 파괴합니다.
    if (GhostRail)
    {
        GhostRail->Destroy();
        GhostRail = nullptr; // 포인터를 정리하여 안전하게 만듭니다.
    }
}

void URailPlacerComponent::SetYawOffset(float InYaw)
{
    YawOffset = InYaw;
}

void URailPlacerComponent::PlaceRail()
{
    if (!RailSplineClass || !LastPlacedSegment) return;

    const FTransform StartTransform = LastPlacedSegment->GetAttachEndTransform();
    FRotator EndRotation = StartTransform.GetRotation().Rotator();
    EndRotation.Yaw += YawOffset;

    FActorSpawnParameters Params;
    Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    // 1. Spline 레일 배치
    ARailSplineActor* SplineActor = GetWorld()->SpawnActor<ARailSplineActor>(RailSplineClass, StartTransform, Params);
    if (SplineActor)
    {
        SplineActor->GenerateRailSpline(StartTransform, EndRotation, SplineLength);

        // 2. 새로운 연결 Segment 위치 계산 및 생성
        const FTransform EndTransform = SplineActor->RailSpline->GetTransformAtSplinePoint(SplineActor->RailSpline->GetNumberOfSplinePoints() - 1, ESplineCoordinateSpace::World);
        ARailSegment* NewSegment = GetWorld()->SpawnActor<ARailSegment>(ARailSegment::StaticClass(), EndTransform, Params);
        if (NewSegment)
        {
            NewSegment->LinkedSpline = SplineActor;
            LastPlacedSegment = NewSegment;
        }
    }
}

void URailPlacerComponent::UpdateGhostPreview()
{
    if (!GhostRail || !LastPlacedSegment) return;

    FTransform BaseTransform = LastPlacedSegment->GetAttachEndTransform();
    FRotator AdjustedRot = BaseTransform.GetRotation().Rotator();
    AdjustedRot.Yaw += YawOffset;
    BaseTransform.SetRotation(FQuat(AdjustedRot));

    GhostRail->SetActorTransform(BaseTransform);
}