#include<iostream>
using namespace std;

int main(){
	int cTemp, fTemp;
	for(cTemp = 100;; cTemp--){
		fTemp = cTemp * 9 / 5 + 32;
		if(cTemp == fTemp)
			break;
	}
	cout << "The temperature is the same at " << cTemp << endl;
	return 0;
}
