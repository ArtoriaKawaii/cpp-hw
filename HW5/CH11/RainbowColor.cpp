#include "RainbowColor.h"
using std::cout;
using std::endl;
namespace RC{
    RainbowColor::RainbowColor(char color_char){
        this->color_char = color_char;
        switch(this->color_char){
            case 'R':
                color_int = 1;
                break;
            case 'O':
                color_int = 2;
                break;
            case 'Y':
                color_int = 3;
                break;
            case 'G':
                color_int = 4;
                break;
            case 'B':
                color_int = 5;
                break;
            case 'I':
                color_int = 6;
                break;
            case 'P':
                color_int = 7;
                break;
        }
    }
    RainbowColor::RainbowColor(int color_int){
        this->color_int = color_int;	
        switch(this->color_int){
            case 1:
                color_char = 'R';
                break;
            case 2:
                color_char = 'O';
                break;
            case 3:
                color_char = 'Y';
                break;
            case 4:
                color_char = 'G';
                break;
            case 5:
                color_char = 'B';
                break;
            case 6:
                color_char = 'I';
                break;
            case 7:
                color_char = 'P';
                break;
        }
    }
    RainbowColor::RainbowColor(){}
    int RainbowColor::getRainbowColorByName(char color_char){
        switch(color_char){
            case 'R':
                return 1;
            case 'O':
                return 2;
            case 'Y':
                return 3;
            case 'G':
                return 4;
            case 'B':
                return 5;
            case 'I':
                return 6;
            case 'P':
                return 7;
            default:
                return -1;//return -1 means not a RainbowColor
        }
    }
    void RainbowColor::outputRainbowColor(){
        cout << color_int << " " << color_char << endl;
    }
    RainbowColor RainbowColor::nextRainbowColor(){
        if(color_int == 7){
            RainbowColor temp(1);
            return temp;
        }
        else{
            RainbowColor temp(color_int + 1);
            return temp;
        }
    }
}