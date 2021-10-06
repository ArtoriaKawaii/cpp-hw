#include"HumanPlayer.h"
HumanPlayer::HumanPlayer(){}
int HumanPlayer::getGuess(){
    int guess;
    cout << "Your turn to guess.\n";
    cin >> guess;
    return guess;
}
