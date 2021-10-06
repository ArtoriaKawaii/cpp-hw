#ifndef ComputerPlayer_H
#define ComputerPlayer_H
#include"Player.h"
#include<cstdlib>
#include<ctime>
class ComputerPlayer : public Player{
    public:
        ComputerPlayer();
        virtual int getGuess() override final;
};
#endif