#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[80], *str_r;
    cout << "Enter a string less than 80 characters long.\n";
    cin.getline(str, 80);
    str_r = str + strlen(str) - 1;
    //head pointer : str, tail pointer : str_r
    int words = 0, words_r = 0;
    for(char* head = str; head <= str_r; head++)
        if(*head == ' ')
            words++;
    words++;
    cout << "Your number of words is : " << words << endl;
    cout << "Your string reversed is : \n";
    for(char* tail = str_r; tail >= str; tail--){
        if(*tail == ' ')
            words_r++;
        cout << *tail;
    }
    words_r++;
    cout << "\nYour number of words after reverse is : " << words_r << endl;
    cout << "The number of words before and after reverse are : ";
    if(words == words_r)
        cout << "The same.\n";
    else
        cout << "Different.\n";
    return 0;
}
