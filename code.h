//John Kang and Patrick Hanbury
//Fundamental of Algorithms
//Project1
//header code.h

#ifndef PROJECT1MASTERMIND_CODE_H
#define PROJECT1MASTERMIND_CODE_H

class code {
    public:
        //member variable
        vector<int> vectorCode; //initialize vector of integers
        void generateRandomCode(); //generates a random and stores it in vectorCode

        //The following functions should only ever be called by
        //the object "winningCode" because they compare guess
        //to the member variable vectorCode
        int checkCorrect(const code &guess);
        int checkIncorrect(const code &guess);

};



#endif //PROJECT1MASTERMIND_CODE_H
