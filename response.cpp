//John Kang and Patrick Hanbury
//Fundamental of Algorithms
//Project1
//class response.cpp

#include "response.h"
#include "code.h"

void response::setResponse(code &winningCode, const code &guess){ //formula to set the individual stored values
    bool correctNumber[4] = {0,0,0,0};//Array for the guess secret code
    bool correctPlace[4] = {0,0,0,0}; //another array for the secret code
    Correct = winningCode.checkCorrect(guess, &correctNumber[0], &correctPlace[0]); //Correct is the return for the checkCorrect function
    Incorret = winningCode.checkIncorrect(guess, &correctNumber[0], &correctPlace[0]); //Incorrect is the return for the checkIncorrect function.
}

bool response::compareResponse(response& newResponse){ //function to compare the Correct and Incorrect variables
    if (newResponse.Correct == this->Correct && newResponse.Incorrect == this->Incorrect) //checking if the variables are equal
        return true; //if the comparison is equal, then return true
    else
        return false; //if the comparison is not, then return false.
}

void response::printResponse(){ //Print function that prints the response
    std::cout<<" ("<<this->Correct<<","<<this->Incorrect<<")"<<std::endl; //prints the two variables Correct & Incorrect in the right format.
}

response::response(code &winningCode, const code &guess){
    setResponse(winningCode, guess); //code objects guess and winningCode are passed to the setResponse function.
}
