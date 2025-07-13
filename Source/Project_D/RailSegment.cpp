// Fill out your copyright notice in the Description page of Project Settings.


#include "RailSegment.h"


ARailSegment::ARailSegment()
{
    PrimaryActorTick.bCanEverTick = false;


    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    AttachStart = CreateDefaultSubobject<USceneComponent>(TEXT("AttachStart"));
    AttachStart->SetupAttachment(RootComponent);

    AttachEnd = CreateDefaultSubobject<USceneComponent>(TEXT("AttachEnd"));
    AttachEnd->SetupAttachment(RootComponent);
}

FTransform ARailSegment::GetAttachEndTransform() const
{
    return AttachEnd->GetComponentTransform();
}

