#pragma once

#include <string>

#include "CoreMinimal.h"

// Declare the function
// void ll(const FString& StringToLog);
void ll(const FString& StringToLog, int SeverityLevel = 0, const FString& Prefix = TEXT("[Info]"));
// void lll(const std::string& LogMessage);



// void lll(const std::string& text);
void lll(const FString& TextToWrite);

FVector Jiggle(const FVector& Vec, float Magnitude);

void eeeee();