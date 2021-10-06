#include"Owner.h"

Owner::Owner() : Blog(){}
void Owner::postMessage(){
    string message;
    cout << "Enter new message.\n";
    cin.ignore(10, '\n');
    getline(cin, message);
    getMessages().push_back(message);
    cout << "Message posted.\n\n";
}
void Owner::displayAllMessages(){
    cout << "Message posted :\n";
    for(unsigned int i = 0; i < getMessages().size(); i++)
        cout << i + 1 << ". " << getMessages().at(i) << endl;
    cout << endl;
}
void Owner::deleteMessage(){
    int index;//nth
    cout << "Which message do you want to delete?\n";
    cin >> index;
    getMessages().erase(getMessages().begin()+index-1);
    cout << "Deleted.\n\n";
}

Owner& Owner::operator=(const Blog& obj){
    Blog::operator=(obj);
    return *this;
}