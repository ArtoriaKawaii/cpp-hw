#include<iostream>
#include<fstream>
#include<string>

using std::ifstream;
using std::ofstream;
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    while(true){
        ifstream data;
        string fileName;
        cout << "Enter a file name : (Enter \"quit\" to quit)\n";
        cin >> fileName;
        if(fileName == "quit")
            return 0;
        data.open(fileName);
        if(data.fail())
            cout << "Cannot open file " << fileName << endl;
        else{
            int number;
            cout << "Build " << fileName + "_out" << endl;
            ofstream outputData;
            outputData.open(fileName + "_out");
            data >> number;
            if(number != 3)
                continue;
            outputData << number << endl;
            while(data >> number){
                if((number - 3) % 4 != 0)
                    break;
                outputData << number << endl;
            }
        }
    }
}