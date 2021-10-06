#include<iostream>
#include<fstream>
#include<string>

using std::ifstream;
using std::cout;
using std::cin;
using std::string;
using std::endl;

double findMedian(ifstream& data, int numberCount, double& index);
//numberCount is the total elements number
//index start with 1
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
            double quartile[3] = {0}, number, index[3] = {0};
            //quartile[1] is median
            //index start with 1
            int numberCount = 0;
            //numberCount is the total elements number
            //count is to locate the element needed
            while(data >> number)
                numberCount++;
            data.close();
            data.open(fileName);
            if(numberCount % 2 == 0){//even number of elements
                quartile[1] = findMedian(data, numberCount, index[1]);
                data.close();
                data.open(fileName);
                quartile[0] = findMedian(data, numberCount / 2, index[0]);
                quartile[2] = findMedian(data, numberCount / 2, index[2]);
            }
            else{//odd number of elements
                quartile[0] = findMedian(data, (numberCount - 1) / 2, index[0]);
                data >> quartile[1];
                index[1] = (numberCount + 1) / 2;
                quartile[2] = findMedian(data, (numberCount - 1) / 2, index[2]);
            }
            data.close();
            cout << "Median number index(start with 1, X.5 means the median is the average of Xth and X+1th element) :\n";
            cout << index[1] << endl;
            cout << "Median number value : " << quartile[1] << endl;
            cout << "Quartile : ";
            for(int i= 0; i < 3; i++)
                cout << quartile[i] << "  ";
            cout << endl;
        }
    }
}

double findMedian(ifstream& data, int numberCount, double& index){
    double median, number;
    int count = 0;
    if(numberCount % 2 == 0){//even number of elements
        while(data >> number){
            count++;
            if(count == numberCount / 2 || count == numberCount / 2 + 1){
                median += number / 2;
                index += count / 2.0;
            }
            if(count == numberCount)
                break;
        }
    }
    else{//odd number of elements
        while(data >> number){
            count++;
            if(count == (numberCount + 1) / 2){
                median = number;
                index = count;
            }
            if(count == numberCount)
                break;
        }
    }
    return median;
}
