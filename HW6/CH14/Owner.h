#ifndef Owner_H
#define Owner_H
#include"Viewer.h"
using std::cin;
class Owner : public Blog{
    public:
        Owner();
        void postMessage();
        void displayAllMessages();
        void deleteMessage();
        Owner& operator=(const Blog& obj);
};
#endif