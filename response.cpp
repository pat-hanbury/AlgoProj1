//John Kang and Patrick Hanbury
//Fundamental of Algorithms
//Project1
//class response.cpp

#include <iostream>
#include "response.h"


void response::setResponse(code &winningCode, const code &guess){ //formula to set the individual stored values

    Correct = winningCode.checkCorrect(guess); //Correct is the return for the checkCorrect function
    Incorrect = winningCode.checkIncorrect(guess); //Incorrect is the return for the checkIncorrect function.
}

bool response::compareResponse(response& newResponse){ //function to compare the Correct and Incorrect variables
    if (newResponse.Correct == this->Correct && newResponse.Incorrect == this->Incorrect) //checking if the variables are equal
        return true; //if the comparison is equal, then return true
    else
        return false; //if the comparison is not, then return false.
}

void response::printResponse(){ //Print function that prints the response
    cout<<" ("<<this->Correct<<","<<this->Incorrect<<")"<<std::endl; //prints the two variables Correct & Incorrect in the right format.
}

response::response(code &winningCode, const code &guess){
    setResponse(winningCode, guess); //code objects guess and winningCode are passed to the setResponse function.
}
