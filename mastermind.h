//John Kang and Patrick Hanbury
//Fundamental of Algorithms
//Project1
//header mastermind.h

#ifndef MASTERMIND_H_INCLUDED
#define MASTERMIND_H_INCLUDED

#include "code.h"
#include "response.h"
#include <iostream>
#include "vector"

using namespace std;

class mastermind{
public:
    //location to store winning code. will only be accessed by the object winningCode
    code winningCode;
    code userGuess; //stored if code a user guess
    void printCode(); //for outputing a code. includes formatting
    code humanGuess(); //gets human guess
    response getResponse(const code &guess); //gets the response of a guess
    bool isSolved(response guessResponse); //outputs true if player wins
    void playGame(); //called in main
};

#endif // MASTERMIND_H_INCLUDED
