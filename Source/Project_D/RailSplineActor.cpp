#include "RailSplineActor.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"

ARailSplineActor::ARailSplineActor()
{
    PrimaryActorTick.bCanEverTick = false;

    RailSpline = CreateDefaultSubobject<USplineComponent>(TEXT("RailSpline"));
    RootComponent = RailSpline;
}

void ARailSplineActor::GenerateRailSpline(const FTransform& StartTransform, const FRotator& EndRotation, float TotalLength)
{
    RailSpline->ClearSplinePoints(true);

    // 1. 시작점 설정
    const FVector StartLocation = StartTransform.GetLocation();
    const FVector StartTangent = StartTransform.GetRotation().Vector() * TotalLength;
    RailSpline->AddSplinePoint(StartLocation, ESplineCoordinateSpace::World, false);
    RailSpline->SetTangentAtSplinePoint(0, StartTangent, ESplineCoordinateSpace::World, false);

    // 2. 끝점 설정
    const FVector EndLocation = StartLocation + StartTangent; // 단순화된 끝점 위치 계산
    const FVector EndTangent = EndRotation.Vector() * TotalLength;
    RailSpline->AddSplinePoint(EndLocation, ESplineCoordinateSpace::World, false);
    RailSpline->SetTangentAtSplinePoint(1, EndTangent, ESplineCoordinateSpace::World, false);

    // 3. 스플라인 최종 업데이트
    RailSpline->UpdateSpline();

    // 런타임에서도 메시를 업데이트하도록 함수 호출
    UpdateRailMeshes();
}

void ARailSplineActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    // 에디터에서도 메시를 업데이트하도록 함수 호출
    UpdateRailMeshes();
}

void ARailSplineActor::UpdateRailMeshes()
{
    // 기존 SplineMesh 모두 제거
    TArray<USplineMeshComponent*> OldMeshes;
    GetComponents<USplineMeshComponent>(OldMeshes);
    for (auto* Comp : OldMeshes)
    {
        Comp->DestroyComponent();
    }

    if (!RailPieceMesh) return;

    // 스플라인의 전체 길이를 조각 길이로 나누어 필요한 메시 개수를 계산합니다.
    const float SplineLength = RailSpline->GetSplineLength();
    const int32 NumSegments = FMath::CeilToInt(SplineLength / SegmentLength);

    for (int32 i = 0; i < NumSegments; ++i)
    {
        const float StartDistance = i * SegmentLength;
        const float EndDistance = (i + 1) * SegmentLength;

        const FVector StartPos = RailSpline->GetLocationAtDistanceAlongSpline(StartDistance, ESplineCoordinateSpace::Local);
        const FVector StartTangent = RailSpline->GetTangentAtDistanceAlongSpline(StartDistance, ESplineCoordinateSpace::Local).GetSafeNormal() * SegmentLength;
        const FVector EndPos = RailSpline->GetLocationAtDistanceAlongSpline(EndDistance, ESplineCoordinateSpace::Local);
        const FVector EndTangent = RailSpline->GetTangentAtDistanceAlongSpline(EndDistance, ESplineCoordinateSpace::Local).GetSafeNormal() * SegmentLength;

        USplineMeshComponent* MeshComp = NewObject<USplineMeshComponent>(this);
        MeshComp->SetStaticMesh(RailPieceMesh);
        MeshComp->SetMobility(EComponentMobility::Movable);
        MeshComp->AttachToComponent(RailSpline, FAttachmentTransformRules::KeepRelativeTransform);
        MeshComp->RegisterComponent();

        MeshComp->SetStartAndEnd(StartPos, StartTangent, EndPos, EndTangent);
        MeshComp->SetForwardAxis(ESplineMeshAxis::Y);

        MeshComp->SetRelativeRotation(FRotator(0.f, 0.f, -90.f)); // 또는 -90, 180 등 실험
    }
}
