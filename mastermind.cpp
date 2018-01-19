//John Kang and Patrick Hanbury
//Fundamental of Algorithms
//Project1
//class mastermind.cpp

#include "mastermind.h"


void mastermind::printCode(){
    winningCode.printCode(); //prints the member function printCode from somwehere
}

void mastermind::humanGuess(){
    somehow get the humanguess..
}







response mastermind::getResponse(const code &guess){
    response guessResponse(winningCode, guess); //Constructor, and a guessResponse is instantiated
    return guessReponse; //returns a guessResponse object
}

bool mastermind::isSolved(response guessResponse){
    if (guessResponse.getCorrect() == 4){ //displays whatever the stored value of the response was
        return true; //if the guess is 4, then the guess is correct and returns true.
    }
    else{
        return false; //if the guess is not 4, then the guess is incorrect and returns false.
    }
}

void mastermind::playGame(){
    code winningCode; //initialize the winning code
    winningCode.generateRandomCode(); //generates random code

    //print the code to the screen
    cout << "The winning code is: " << endl;
    winningCode.printCode();



    for (int i=0; i<9; i++){ //for loop that runs through 10 iterations
        code userGuess = humanGuess(); //instantiates an object called guess using the humanGuess function
        response guessResponse = getResponse(userGuess); //
        if (isSolved(guessResponse) == true){ //check to see if response was correct using the isSolved function
            std::cout<< "You Win!"; //winning message
            return; //return if the user won
        }
    }

    //losing message
    std::cout<<"You Lose! The actual code was: " << endl;
    printCode(); //prints the secret code after 10 iterations, you lost.
}


