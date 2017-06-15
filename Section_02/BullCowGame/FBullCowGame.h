#pragma once
#include <string>

using FString = std::string;
using int32 = int;

// Functions
void PlayGame();
void PrintIntro();
FString GetGuess();
bool AskToPlayAgain();

struct BullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame
{
public:
	FBullCowGame(); //Construct

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;
	void Reset();
	bool CheckGuess(FString) const;

	
	//Method for counting bulls and cows & increases turn number
	BullCowCount SubmitGuess(FString);

private:
	int32 MyCurrentTry; //See constructor for initialization
	int32 MyMaxTries;
};