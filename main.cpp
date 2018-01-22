#include <iostream>
#include "mastermind.h"
#include "mastermind.cpp"
#include "code.h"

//still need to write code.cpp
//#include "code.cpp"

#include "response.h"
#include "response.cpp"

using namespace std;

int main() {
    mastermind gameObject; //intialize the object with all the power
    //Play the game!
    gameObject.playGame();
    return 0;
}