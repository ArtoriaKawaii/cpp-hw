#include<iostream>
#include<fstream>
#include<string>

using std::ifstream;
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    while(true){
        ifstream data;
        string fileName;
        double num, sum = 0;
        int count = 0;
        cout << "Enter a file name : (Enter \"quit\" to quit)\n";
        cin >> fileName;
        if(fileName == "quit")
            return 0;
        data.open(fileName);
        if(data.fail())
            cout << "Cannot open file " << fileName << endl;
        else{
            while(data >> num){
                sum += num;
                count++;
            }
            cout << "Average of " << count << " numbers is " << sum / count << endl;
            data.close();
        }
    }
}