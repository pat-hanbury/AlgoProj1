//John Kang and Patrick Hanbury
//Fundamental of Algorithms
//Project1
//class code.cpp

#include "code.h"

void code::generateRandomCode() //generates a random and stores it in vectorCode
{
    srand(time(NULL));
    //loop over 4 digits of vectorCode
    for (int i = 0; i < 4 ; i++)
    {
        vectorCode.push_back(std::rand() % 6);
        //generate a random number between 0 and 5
        //int randNum = rand()%6;
        //store random number in vectorCode
        //vectorCode.push_back(randNum);
    }
}

int code::checkCorrect(const code &guess)
{
    int correctNumbersAndPlace = 0; //number of numbers from guess in correct number and place
    for (int i = 0; i < 4; i++)
    {
        //check if any correct numbers of guess are in the correct place
        if (vectorCode[i] == guess.vectorCode[i])
            {
                correctNumbersAndPlace++; //increase temp variable
            }
    }

    return correctNumbersAndPlace; //output the number
}

int code::checkIncorrect(const code &guess)
{
    vector<int> correctNumbersVector(0); //initialize vector to size 0
    //loop over vectorCode
    for (int i = 0; i < 4 ; i ++)
    {
        //loop over guess.vectorCode
        for (int j = 0; j < 4 ; j++)
        {
            //insure that we don't add digits for correct number and place
            if(i != j)
            {
                //determine if a digit in vectorCode[i] is the same as any digit in guess.vectorCode
                //if so, that digit will be added to correctNumbersVector
                if (vectorCode[i] == guess.vectorCode[j])
                {
                    //FOO: determine if number is already in correctNumbersVector
                    if (std::find(correctNumbersVector.begin(), correctNumbersVector.end(), vectorCode[i]) == correctNumbersVector.end())
                    {
                        //if not, add to correctNumbersVector
                        correctNumbersVector.push_back(vectorCode[i]);
                    }
                }
            }
        }
    }
    return correctNumbersVector.size();
}

void code::printCode()
{
    //set up formatting
    cout << "[ ";
    //loop over vectorCode vector
    for (int i = 0; i <4 ; i++)
    {
        //output each digit of the code
        cout << vectorCode[i];
    }
    cout << " ]" << endl;
}