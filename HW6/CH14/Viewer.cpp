#include"Viewer.h"

Viewer::Viewer() : Blog(){}
void Viewer::displayAllMessages(){
    cout << "Message posted :\n";
    for(unsigned int i = 0; i < getMessages().size(); i++)
        cout << i + 1 << ". " << getMessages().at(i) << endl;
    cout << endl;
}
Viewer& Viewer::operator=(const Blog& obj){
    Blog::operator=(obj);
    return *this;
}