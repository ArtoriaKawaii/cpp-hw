#include"ComputerPlayer.h"
ComputerPlayer::ComputerPlayer(){}
int ComputerPlayer::getGuess(){
    srand(time(NULL));
    int guess = rand() % (100 + 1);
    cout << "The computer guesses " << guess << endl;
    return guess;
}