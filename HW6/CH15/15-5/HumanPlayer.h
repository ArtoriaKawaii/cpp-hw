#ifndef HumanPlayer_H
#define HumanPlayer_H
#include"Player.h"
#include<iostream>
using std::cin;
using std::cout;
class HumanPlayer : public Player{
    public:
        HumanPlayer();
        virtual int getGuess() override final;
};
#endif