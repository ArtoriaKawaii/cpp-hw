#ifndef Viewer_H
#define Viewer_H
#include<iostream>
#include"Blog.h"
using std::cout;
using std::endl;
class Viewer : public Blog{
    public:
        Viewer();
        void displayAllMessages();
        Viewer& operator=(const Blog& obj);
};
#endif