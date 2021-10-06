#ifndef Blog_H
#define Blog_H
#include<string>
#include<vector>
using std::string;
using std::vector;
class Blog{
    private:
        vector<string> messages;
    public:
        Blog();
        vector<string>& getMessages();
        Blog& operator=(const Blog& obj);
};
#endif