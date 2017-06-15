#include "FBullCowGame.h"

using int32 = int;

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
bool FBullCowGame::IsGameWon() const { return false; }
bool FBullCowGame::CheckGuess(FString) const { return false; }


//Receives a valid guess, increments turn, and returns count
BullCowCount FBullCowGame::SubmitGuess(FString)
{
	return BullCowCount();
}

FBullCowGame::FBullCowGame() // This is a constructor << Runs First
{
	Reset();
}

void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;
	MyCurrentTry = 1;
	return;
}
