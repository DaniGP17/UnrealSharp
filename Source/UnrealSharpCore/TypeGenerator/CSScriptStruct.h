#pragma once

#include "Engine/UserDefinedStruct.h"
#include "CSScriptStruct.generated.h"

UCLASS()
class UNREALSHARPCORE_API UCSScriptStruct : public UUserDefinedStruct
{
	GENERATED_BODY()

public:

	void RecreateDefaults()
	{
		DefaultStructInstance.Recreate(this);
	}
};