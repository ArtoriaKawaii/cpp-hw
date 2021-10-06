// #ifndef RAINBOWCOLOR_H
// #define RAINBOWCOLOR_H

#include<iostream>

namespace RC{
    class RainbowColor{
        public:
            RainbowColor(char color_char);
            RainbowColor(int color_int);
            RainbowColor();
            static int getRainbowColorByName(char color_char);//return -1 means not a RainbowColor
            void outputRainbowColor();
            RainbowColor nextRainbowColor();
        private:
            char color_char;
            int color_int;
    };
}

// #endif