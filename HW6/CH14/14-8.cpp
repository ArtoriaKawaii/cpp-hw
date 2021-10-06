#include<iostream>
#include<string>
#include"Viewer.h"
#include"Owner.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
    cout << "First, enter data as owner.\n";
    Owner owner;
    while(true){
        int option;
        cout << "Menu options :\n";
        cout << "0> Exit\n";
        cout << "1> Display all messages\n";
        cout << "2> Post new message\n";
        cout << "3> Delete message\n";
        cout << "Enter command.\n";
        cin >> option;
        if(option == 0)
            break;
        else{
            switch(option){
                case 1:
                    owner.displayAllMessages();
                    break;
                case 2:
                    owner.postMessage();
                    break;
                case 3:
                    owner.deleteMessage();
                    break;
                default:
                    cout << "Invalid command. Please re-enter.\n";
            }
        }
    }
    cout << "Access data as viewer.\n";
    Viewer viewer;
    viewer = owner;
    while(true){
        int option;
        cout << "Menu options :\n";
        cout << "0> Exit\n";
        cout << "1> Display all messages\n";
        cout << "Enter command.\n";
        cin >> option;
        if(option == 0)
            break;
        else if(option == 1)
            viewer.displayAllMessages();
        else
            cout << "Invalid command. Please re-enter.\n";
    }

}