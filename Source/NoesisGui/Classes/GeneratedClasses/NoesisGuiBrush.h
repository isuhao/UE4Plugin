////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisGuiTypes.h"
#include "GeneratedClasses/NoesisGuiAnimatable.h"
#include "NoesisGuiBrush.generated.h"

UCLASS()
class NOESISGUI_API UNoesisGuiBrush : public UNoesisGuiAnimatable
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
bool IsTransparent();

	// UObject interface
	virtual void BeginDestroy() override;
	// End of UObject interface
};

