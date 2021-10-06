#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;

int main(){
	int firstDigit[10] = {0}; //0 ~ 9
	string numString;
	int num, count = 0;
	fstream file;
	file.open("Data.txt");
	if(!file)
		cout << "Open file failed.\n";
	else{
		while(file >> numString){
			num = numString.at(0) - '0';
			firstDigit[num]++;
			count++;
		}	
		for(int i = 0; i < 10; i++)	
			cout << i << "\t" << firstDigit[i] * 100.0 / count << "%\n";
		file.close();
	}	
	return 0;
}
