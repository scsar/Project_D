// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RailSegment.generated.h"

class ARailSplineActor; // 전방 선언 추가

UENUM(BlueprintType)
enum class ERailType : uint8
{
    Straight,
    CurveLeft,
    CurveRight
};


UCLASS()
class PROJECT_D_API ARailSegment : public AActor
{
	GENERATED_BODY()
	
    ARailSegment();

    UPROPERTY(VisibleAnywhere)
    USceneComponent* AttachStart;   // 레일과 레일이 연결되는 시작점
     
    UPROPERTY(VisibleAnywhere)
    USceneComponent* AttachEnd;     // 다음 레일이 연결될 끝점




public:
    UPROPERTY()
    ARailSplineActor* LinkedSpline;


    FTransform GetAttachEndTransform() const;

};