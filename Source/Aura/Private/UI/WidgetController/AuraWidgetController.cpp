// Copyright Ludens Studio


#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& InWCParams)
{
	PlayerController = InWCParams.PlayerController;
	PlayerState = InWCParams.PlayerState;
	AbilitySystemComponent = InWCParams.AbilitySystemComponent;
	AttributeSet = InWCParams.AttributeSet;
}

void UAuraWidgetController::BroadCastInitialValues()
{
}

void UAuraWidgetController::BindCallbacksToDependencies()
{
}
