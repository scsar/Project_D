#include "MYPlayerController.h"
#include "RailPlacerComponent.h"
#include "Kismet/GameplayStatics.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

AMYPlayerController::AMYPlayerController()
{
    bShowMouseCursor = true;
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;


}

void AMYPlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        Subsystem->AddMappingContext(MappingContext, 0);
    }
}

void AMYPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (UEnhancedInputComponent* EInput = Cast<UEnhancedInputComponent>(InputComponent))
    {
        EInput->BindAction(IA_PlaceRail, ETriggerEvent::Started, this, &AMYPlayerController::StartPlacing);
        EInput->BindAction(IA_PlaceRail, ETriggerEvent::Completed, this, &AMYPlayerController::ConfirmPlacing);

    }
}

void AMYPlayerController::StartPlacing()
{
    bIsPlacing = true;

    // 마우스 클릭 시작 지점 기록
    GetMousePosition(InitialMousePos.X, InitialMousePos.Y);

    // RailPlacerComponent 참조 가져오기
    if (!RailPlacer)
    {
        APawn* ControlledPawn = GetPawn();
        if (ControlledPawn)
        {
            RailPlacer = ControlledPawn->FindComponentByClass<URailPlacerComponent>();
        }
    }

    if (RailPlacer)
    {
        RailPlacer->StartPlacement();
    }
}

void AMYPlayerController::ConfirmPlacing()
{
    bIsPlacing = false;

    if (RailPlacer)
    {
        RailPlacer->ConfirmPlacement();
    }
}

void AMYPlayerController::PlayerTick(float DeltaTime)
{
    Super::PlayerTick(DeltaTime);

    if (bIsPlacing && RailPlacer)
    {
        FVector2D CurrentMousePos;
        if (GetMousePosition(CurrentMousePos.X, CurrentMousePos.Y))
        {
            FVector2D Delta = CurrentMousePos - InitialMousePos;

            if (!Delta.IsNearlyZero())
            {
                float Angle = FMath::Atan2(Delta.Y, Delta.X) * (180.f / PI);
                RailPlacer->SetYawOffset(Angle);
            }
        }
    }
}
