#pragma once
#include <string>

class FBullCowGame {
public:
    FBullCowGame(); // constructor 

    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;

    void Reset(); // TODO make a more rich retun value
    bool CheckGuessValidity(std::string); // TODO make a more rich retun value

private:
    // see constructor for initialization
    int MyCurrentTry;
    int MyMaxTries;
};