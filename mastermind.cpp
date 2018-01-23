//John Kang and Patrick Hanbury
//Fundamental of Algorithms
//Project1
//class mastermind.cpp


#include "mastermind.h"


code mastermind::humanGuess(){
    code inputtedGuess; //initialize local code object
    //initialize variables for 4 digit code
    int digit;
    cout << "Please enter your guess" << endl; //prompt user
    for (int i = 0; i < 4 ; i++){
        cin >> digit;
        //check if input digit is within range
        if (digit > 9 || digit < 0 ){
            cout << "Invalid input guess. Try inputting digit again" << endl;
                 i--;
        }
        else{
            //add digit to vector containing code in inputtedGuess
            inputtedGuess.vectorCode.push_back(digit);
        }
    }
    return inputtedGuess; //return code object inputtedGuess
}


response mastermind::getResponse(const code &guess){
    response guessResponse(winningCode, guess); //Constructor, and a guessResponse is instantiated
    return guessResponse; //returns a guessResponse object
}

bool mastermind::isSolved(response guessResponse){
    if (guessResponse.Correct == 4){ //displays whatever the stored value of the response was
        return true; //if the guess is 4, then the guess is correct and returns true.
    }
    else{
        return false; //if the guess is not 4, then the guess is incorrect and returns false.
    }
}

void mastermind::playGame(){
    winningCode.generateRandomCode(); //generates random code

    //print the code to the screen
    std::cout << "The winning code is: " << endl;
    winningCode.printCode();



    for (int i=0; i<9; i++){ //for loop that runs through 10 iterations
        code userGuess = humanGuess(); //instantiates an object called guess using the humanGuess function
        response guessResponse = getResponse(userGuess); //
        if (isSolved(guessResponse) == true){ //check to see if response was correct using the isSolved function
            std::cout<< "You Win!"; //winning message
            return;
        }
        else
        {
            cout << "Incorrect Guess." << endl;
            cout << "[ " << guessResponse.Correct << " " << guessResponse.Incorrect << " ]" << endl;
        }
    }

    //losing message
    std::cout<<"You Lose! The actual code was: " << endl;
    winningCode.printCode(); //prints the secret code after 10 iterations, you lost.
}


