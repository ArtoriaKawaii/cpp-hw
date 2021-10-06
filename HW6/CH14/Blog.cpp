#include"Blog.h"
Blog::Blog(){}
vector<string>& Blog::getMessages(){
    return messages;
}
Blog& Blog::operator=(const Blog& obj){
    messages = obj.messages;
    return *this;
}