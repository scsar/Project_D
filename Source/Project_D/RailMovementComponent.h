// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RailMovementComponent.generated.h"

class ARailSplineActor;
class UCharacterMovementComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_D_API URailMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	URailMovementComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // 레일 위에서의 움직임을 시작/종료하는 함수
    void StartGrinding(ARailSplineActor* RailToGrind);
    void StopGrinding();

    // 에디터에서 조절할 수 있는 물리 값들
    UPROPERTY(EditAnywhere, Category = "Rail Movement")
    float RailGravity = 980.f; // 레일 방향으로 누르는 중력

    UPROPERTY(EditAnywhere, Category = "Rail Movement")
    float ForwardForce = 3000.f; // 앞으로 나아가는 힘

    UPROPERTY(EditAnywhere, Category = "Rail Movement")
    float MaxGripForce = 5000.f; // 레일에 붙어있을 수 있는 최대 흡착력 (원심력 저항)

    UPROPERTY(EditAnywhere, Category = "Rail Movement")
    float BrakingFriction = 0.5f; // 마찰력 계수

private:
    // 상태 변수
    bool bIsOnRail = false;
    float DistanceAlongRail = 0.f;

    // 캐시된 컴포넌트 및 액터
    UPROPERTY()
    ARailSplineActor* CurrentRail = nullptr;

    UPROPERTY()
    ACharacter* OwnerCharacter = nullptr;

    UPROPERTY()
    UCharacterMovementComponent* MovementComponent = nullptr;
};
