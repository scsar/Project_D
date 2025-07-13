// Fill out your copyright notice in the Description page of Project Settings.

#include "RailMovementComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SplineComponent.h"
#include "RailSplineActor.h"

URailMovementComponent::URailMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void URailMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// 컴포넌트가 부착된 액터와 그 움직임 컴포넌트를 찾아 저장해둡니다.
	OwnerCharacter = Cast<ACharacter>(GetOwner());
	if (OwnerCharacter)
	{
		MovementComponent = OwnerCharacter->GetCharacterMovement();
	}
}

void URailMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bIsOnRail || !OwnerCharacter || !MovementComponent || !CurrentRail)
	{
		return;
	}

    // 1. 현재 속도와 레일 위의 가장 가까운 지점을 찾습니다.
    const FVector CurrentVelocity = OwnerCharacter->GetVelocity();
    const FVector CurrentLocation = OwnerCharacter->GetActorLocation();
    const float ClosestInputKey = CurrentRail->RailSpline->FindInputKeyClosestToWorldLocation(CurrentLocation);
    DistanceAlongRail = CurrentRail->RailSpline->GetDistanceAlongSplineAtSplineInputKey(ClosestInputKey);

    // 2. 레일의 정보(위치, 방향, 위/아래 방향)를 가져옵니다.
    const FVector RailLocation = CurrentRail->RailSpline->GetLocationAtDistanceAlongSpline(DistanceAlongRail, ESplineCoordinateSpace::World);
    const FVector RailDirection = CurrentRail->RailSpline->GetDirectionAtDistanceAlongSpline(DistanceAlongRail, ESplineCoordinateSpace::World);
    const FVector RailUpVector = CurrentRail->RailSpline->GetUpVectorAtDistanceAlongSpline(DistanceAlongRail, ESplineCoordinateSpace::World);

    // 3. 힘(Force) 계산
    // 3.1. 흡착력 (Grip Force): 캐릭터를 레일 쪽으로 당기는 힘
    const FVector GripForce = (RailLocation - CurrentLocation) * 1000.f; // 위치 차이에 비례하여 힘 증가

    // 3.2. 전진력 (Forward Force): 레일 방향으로 가속
    const FVector AppliedForwardForce = RailDirection * ForwardForce;

    // 3.3. 레일 중력 (Rail Gravity): 캐릭터를 레일 아래로 누르는 힘
    const FVector AppliedGravity = -RailUpVector * RailGravity;

    // 3.4. 마찰력 (Friction): 현재 속도에 반대로 작용
    const FVector Friction = -CurrentVelocity * BrakingFriction;

    // 4. 모든 힘을 합산하여 캐릭터에 적용
    MovementComponent->AddForce(GripForce + AppliedForwardForce + AppliedGravity + Friction);

    // 5. 이탈 조건 체크: 흡착력이 최대치를 넘으면 레일에서 튕겨나감
    if (GripForce.Size() > MaxGripForce)
    { 
        StopGrinding();
        // 튕겨나가는 효과를 위해 현재 속도에 추가적인 힘을 가할 수도 있습니다.
        MovementComponent->AddImpulse(CurrentVelocity.GetSafeNormal() * 1000.f, true);
    }
}

void URailMovementComponent::StartGrinding(ARailSplineActor* RailToGrind)
{
    if (!OwnerCharacter || !MovementComponent || !RailToGrind)
    {
        return;
    }

    bIsOnRail = true;
    CurrentRail = RailToGrind;

    // 캐릭터의 움직임 모드를 '비행'으로 변경하여 중력과 마찰을 끕니다.
    MovementComponent->SetMovementMode(MOVE_Flying);
    MovementComponent->Velocity = OwnerCharacter->GetVelocity(); // 기존 속도 유지
}

void URailMovementComponent::StopGrinding()
{
    if (!MovementComponent)
    { 
        return;
    }

    bIsOnRail = false;
    CurrentRail = nullptr;

    // 캐릭터의 움직임 모드를 다시 '걷기' 또는 '낙하'로 되돌립니다.
    MovementComponent->SetMovementMode(MOVE_Falling);
}
