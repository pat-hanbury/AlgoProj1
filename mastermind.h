//John Kang and Patrick Hanbury
//Fundamental of Algorithms
//Project1
//header mastermind.h

#ifndef MASTERMIND_H_INCLUDED
#define MASTERMIND_H_INCLUDED

class mastermind{
public:
    code winningCode;
    code userGuess;
    void printCode();
    void humanGuess();
    response getResponse(const code &guess);
    bool isSolved(response guessResponse);
    void playGame();
};

#endif // MASTERMIND_H_INCLUDED
