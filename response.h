//John Kang and Patrick Hanbury
//Fundamental of Algorithms
//Project1
//header response.h

#ifndef RESPONSE_H_INCLUDED
#define RESPONSE_H_INCLUDED

#include "code.h"
using namespace std;

class response{
private:

public:
    int Correct; //Variable that represents the number of correct digits
    int Incorrect; //Variable that represents the number of correct digits in the wrong position.
    void setResponse(code& winningCode, const code& guess); //Function that takes winningCode and guess as objects in order to set the variables Correct and Incorrect.
    bool compareResponse(response& newResponse); //Function that takes the response object by reference and compares it to the response.
    void printResponse(); //Function that prints the variables Correct and Incorrect
    response(code& winningCode, const code& guess); //Constructor that takes winningCode and guess as objects by reference
};


#endif // RESPONSE_H_INCLUDED
