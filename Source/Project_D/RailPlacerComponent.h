// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RailSegment.h"
#include "RailSplineActor.h"
#include "RailPlacerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_D_API URailPlacerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
    URailPlacerComponent();

    virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

    // 설치할 SplineActor 클래스
    UPROPERTY(EditAnywhere, Category = "Rail")
    TSubclassOf<ARailSplineActor> RailSplineClass;

    // 미리보기용 액터 클래스
    UPROPERTY(EditAnywhere, Category = "Rail")
    TSubclassOf<AActor> GhostRailClass;

    // 레일 길이
    UPROPERTY(EditAnywhere, Category = "Rail")
    float SplineLength = 500.f;

    // 마우스 회전 및 배치
    void StartPlacement();        // 클릭 시작
    void ConfirmPlacement();      // 클릭 끝내고 배치 확정
    void SetYawOffset(float InYaw);

private:
    void UpdateGhostPreview();    // 회전 및 위치에 Ghost 표시
    void PlaceRail();             // 레일 배치
    void RotateYaw(float DeltaDegrees);

    UPROPERTY()
    AActor* GhostRail = nullptr;

    UPROPERTY()
    ARailSegment* LastPlacedSegment = nullptr;

    bool bIsPlacing = false;
    float YawOffset = 0.f;
};