﻿#include "utillllllssss.h"
#include <fstream>

// #include <iostream>

#include "Engine/Engine.h"

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

void ll(const FString& StringToLog, int SeverityLevel, const FString& Prefix)
{
	if (!StringToLog.IsEmpty())
	{
		FString LogMessage = Prefix + StringToLog; // Prepends a prefix to the original message
		// ELogVerbosity::Type LogLevel1;

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
}
//
// void lll(const std::string& LogMessage)
// {
// 	std::ofstream logFile("log.txt", std::ios::app); // Open the log file in append mode
//
// 	if (logFile.is_open()) {
// 		logFile << logMessage << std::endl;
// 		logFile.close(); // Close the file after writing to ensure data is written to disk
// 	} else {
// 		// Handle the error as needed
// 		std::cerr << "Unable to open log file for writing." << std::endl;
// 	}
// }
// void lll(const std::string& text)
// {
// 	// Create and open a text file in append mode
// 	std::ofstream outFile("output.txt", std::ios::app); // Open in append mode
//
// 	if (!outFile.is_open()) {
// 		std::cerr << "Failed to open file." << std::endl;
// 		return;
// 	}
//
// 	// Write the text to the file
// 	outFile << text << std::endl;
//
// 	// Close the file
// 	outFile.close();
//
// 	std::cout << "File written successfully." << std::endl;
// }
void lll(const FString& TextToWrite)
{
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

FVector Jiggle(const FVector& Vec, float Magnitude)
{
	FVector RandomJitter;
	RandomJitter.X = FMath::RandRange(-0.5f, 0.5f) * Magnitude;
	RandomJitter.Y = FMath::RandRange(-0.5f, 0.5f) * Magnitude;
	RandomJitter.Z = FMath::RandRange(-0.5f, 0.5f) * Magnitude;

	return Vec + RandomJitter;
}

