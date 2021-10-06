#include"Player.h"
Player::Player(){
    //guess 0~100
    upper = 101;
    lower = -1;
}
int Player::getUpper() const{
    return upper;
}
int Player::getLower() const{
    return lower;
}
int Player::getGuess(){
    return 0;
}
bool Player::checkForWin(int guess, int answer){
    if (answer == guess){
        cout << "You're right! You win!" << endl;
        return true;
    }
    else if (answer < guess){
        cout << "Your guess is too high." << endl;
        upper = guess;
    }
    else{
        cout << "Your guess is too low." << endl;
        lower = guess;
    }
    return false;
}
void play(Player &player1, Player &player2){
    int answer = 0, guess = 0;
    srand(time(NULL));
    answer = rand() % (100 + 1);//answer = 0~100
    bool win = false;
    while (!win){
        cout << "Player 1's turn to guess." << endl;
        guess = player1.getGuess();
        win = player2.checkForWin(guess, answer);//updates player2(computer)'s data, also check if player1(Human) win 
        if (win) 
            return;
        cout << "Player 2's turn to guess." << endl;
        guess = player2.getGuess();
        win = player2.checkForWin(guess, answer);//updates player2(computer)'s data, also check if player2 win 
    }
}