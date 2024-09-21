#include "utillllllssss.h"
#include <fstream>

// #include <iostream>

#include "Engine/Engine.h"
// #include "Editor.h"
// void ll(const FString& StringToLog)
// {
// 	if (!StringToLog.IsEmpty())
// 	{
// 		// Log to Unreal Engine console
// 		UE_LOG(LogTemp, Log, TEXT("%s"), *StringToLog);
//         
// 		// Optionally, display on screen
// 		if (GEngine)
// 		{
// 			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, StringToLog);
// 		}
// 	}
// }




void ll3(const FString& StringToLog, int SeverityLevel, const FString& Prefix)
{
	bool nologgggggggg=true;

	if (nologgggggggg)
	{
		return;
	}
	else
	{
		
	}
	if (!StringToLog.IsEmpty())
	{
	
	
		FString LogMessage = Prefix + StringToLog; // Prepends a prefix to the original message
		// ELogVerbosity::Type LogLevel1;
	
	
		if (0)
		{
			// Map SeverityLevel to ELogVerbosity
			switch (SeverityLevel) 
			{
			case 1:
			
				UE_LOG(LogTemp, Warning, TEXT("%s"), *LogMessage);
	
				break;
			case 2:
				UE_LOG(LogTemp, Error, TEXT("%s"), *LogMessage);	
				break;
			default:
				UE_LOG(LogTemp, Log, TEXT("%s"), *LogMessage);
				break;
			}
		}
		else
		{// Map SeverityLevel to ELogVerbosity
			switch (SeverityLevel) 
			{
			case 1:
			
				UE_LOG(LogTemp, Warning, TEXT("%s"), *LogMessage);
	
				break;
			case 2:
				UE_LOG(LogTemp, Error, TEXT("%s"), *LogMessage);	
				break;
			default:
				UE_LOG(LogTemp, Log, TEXT("%s"), *LogMessage);
				break;
			}
			if(GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 10, FColor::White, LogMessage);
			}
		}
	
		
	}
}

void lll(const FString& TextToWrite)
{

	bool nologgggggggg=true;

	if (nologgggggggg)
	{
		return;
	}
	else
	{
		
	}
	if (0)
	{
		// Define the path to the log file.
		std::string FilePath = R"(V:\UNREALLLLPROJECTSSSSSS\FORCEGRAPH\Source\FORCEGRAPH\MyLogFile.txt)";  // Change path accordingly
	
		// Open the log file with append mode.
		std::ofstream LogFile(FilePath, std::ios::app);
		if (LogFile.is_open())
		{
			// Write the text to the file and end with a new line.
			LogFile << TCHAR_TO_ANSI(*TextToWrite) << std::endl;
	
			// Close the file.
			LogFile.close();
		}
		else
		{
			// Log an error message if file opening failed.
			UE_LOG(LogTemp, Warning, TEXT("Failed to open log file."));
		}
	}
	else
	{
		if (0)
		{
			ll(TextToWrite, 0, TEXT("[Info]"));
		}
		else
		{
			
		}
	}
}


void lll2(const FString& StringToLog, int SeverityLevel, const FString& Prefix)
{

	bool nologgggggggg=false;

	if (nologgggggggg)
	{
		return;
	}
	else
	{
		
	}
	if (!StringToLog.IsEmpty())
	{
	
	
		FString LogMessage = Prefix + StringToLog; // Prepends a prefix to the original message
		// ELogVerbosity::Type LogLevel1;
	
	
		if (0)
		{
			// Map SeverityLevel to ELogVerbosity
			switch (SeverityLevel) 
			{
			case 1:
			
				UE_LOG(LogTemp, Warning, TEXT("%s"), *LogMessage);
	
				break;
			case 2:
				UE_LOG(LogTemp, Error, TEXT("%s"), *LogMessage);	
				break;
			default:
				UE_LOG(LogTemp, Log, TEXT("%s"), *LogMessage);
				break;
			}
		}
		else
		{// Map SeverityLevel to ELogVerbosity
			switch (SeverityLevel) 
			{
			case 1:
			
				UE_LOG(LogTemp, Warning, TEXT("%s"), *LogMessage);
	
				break;
			case 2:
				UE_LOG(LogTemp, Error, TEXT("%s"), *LogMessage);	
				break;
			default:
				UE_LOG(LogTemp, Log, TEXT("%s"), *LogMessage);
				break;
			}
			if(GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 10, FColor::White, LogMessage);
			}
		}
	
		
	}
}

FVector Jiggle(const FVector& Vec, float Magnitude)
{
	FVector RandomJitter;
	RandomJitter.X = FMath::RandRange(-0.5f, 0.5f) * Magnitude;
	RandomJitter.Y = FMath::RandRange(-0.5f, 0.5f) * Magnitude;
	RandomJitter.Z = FMath::RandRange(-0.5f, 0.5f) * Magnitude;

	return Vec + RandomJitter;
}





void eeeee()
{
	// if (GEditor)
	// {
	// 	GEditor->EndPlayMap();
	// }

}
