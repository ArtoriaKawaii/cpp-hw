#ifndef Player_H
#define Player_H
#include<iostream>
#include<cstdlib>
#include<ctime>
using std::cout;
using std::endl;
class Player{
    public:
        Player();
        virtual int getGuess();
};
bool checkForWin(int guess, int answer);
void play(Player &player1, Player &player2);
#endif