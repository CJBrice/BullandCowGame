#include <iostream>
#include <string>
#include "FBullCowGame.h"

//Substitution
using FText = std::string;
using int32 = int;

// Variables
constexpr int32 NUMBER_OF_TURNS = 5;
FBullCowGame BCGame;

int main()
{
	do 
	{
		PrintIntro();
		PlayGame();
	}
	while (AskToPlayAgain()); //while is true

	return 0;
}

void PlayGame()
{
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries();

	std::cout << "You have " << MaxTries << " tries!" << std::endl;

	// TODO Change from FOR loop to WHILE loop once we are validating tries
	for (int32 count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		FText Guess = GetGuess();  // TODO make loop to check guess validity

		// submit valid guess to game
		// print number of bulls and cows
		
		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}

	// Add game summary
}

void PrintIntro()
{
	constexpr int32 WORD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game!" << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << std::endl;
	return;
}

FText GetGuess()
{
	int32 CurrentTry = BCGame.GetCurrentTry();
	std::cout << "Try (" << CurrentTry << "): " << "Please enter your guess now...";
	FText Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Would you like to play again?" << std::endl;
	FText Response = "";
	std::getline(std::cin, Response);

	if (Response[0] == 'y' || Response[0] == 'Y')
	{
		return true;
	}
	else if (Response[0] == 'n' || Response[0] == 'N')
	{
		return false;
	}
	else
	{
		return false;
	}
}