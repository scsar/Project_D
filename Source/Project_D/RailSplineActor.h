// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RailSplineActor.generated.h"

class USplineComponent;
class USplineMeshComponent;
class UStaticMesh;

// Blueprintable과 BlueprintType을 추가하여 블루프린트 시스템에 노출시킵니다.
UCLASS(Blueprintable, BlueprintType)
class PROJECT_D_API ARailSplineActor : public AActor
{
    GENERATED_BODY()

public:
    ARailSplineActor();

    // 설치될 Spline
    UPROPERTY(VisibleAnywhere)
    USplineComponent* RailSpline;

    // 반복될 레일 조각 Mesh
    UPROPERTY(EditAnywhere)
    UStaticMesh* RailPieceMesh;

    // 레일 조각의 길이
    UPROPERTY(EditAnywhere)
    float SegmentLength = 100.f;

    // 스플라인을 생성하고 업데이트하는 함수
    void GenerateRailSpline(const FTransform& StartTransform, const FRotator& EndRotation, float TotalLength);

protected:
    virtual void OnConstruction(const FTransform& Transform) override;

private:
    // 스플라인을 따라 메시를 채우는 함수
    void UpdateRailMeshes();
};