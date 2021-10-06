#include"ComputerPlayer.h"
ComputerPlayer::ComputerPlayer(){}
int ComputerPlayer::getGuess(){
    srand(time(NULL));
    int guess = rand() % (getUpper() - getLower() - 1) + (getLower() + 1);//lower < guess < upper
    cout << "The computer guesses " << guess << endl;
    return guess;
}