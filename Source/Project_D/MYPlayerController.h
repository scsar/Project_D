#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MYPlayerController.generated.h"

class URailPlacerComponent;
class UInputMappingContext;
class UInputAction;


UCLASS()
class PROJECT_D_API AMYPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    AMYPlayerController();

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;
    virtual void PlayerTick(float DeltaTime) override;

private:
    // ���� ��ġ ������Ʈ (ĳ���� �Ǵ� Pawn���� ����)
    UPROPERTY()
    URailPlacerComponent* RailPlacer;

    bool bIsPlacing = false;
    FVector2D InitialMousePos;

    void StartPlacing();
    void ConfirmPlacing();

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputMappingContext* MappingContext;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* IA_PlaceRail;
};
