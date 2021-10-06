#ifndef Player_H
#define Player_H
#include<iostream>
#include<cstdlib>
#include<ctime>
using std::cout;
using std::endl;
class Player{
    private://bonds
        int upper;
        int lower;
    public:
        Player();
        int getUpper() const;
        int getLower() const;
        virtual int getGuess();
        bool checkForWin(int guess, int answer);
};
void play(Player &player1, Player &player2);
#endif