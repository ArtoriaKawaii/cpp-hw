#include<iostream>
using namespace std;

int main(){
	int subjects, points = 0;
	char grade;
	cout.setf(ios :: fixed);
	cout.setf(ios :: showpoint);
	cout << "Input the number of subjects: ";
	cin >> subjects;
	for(int i = 1; i <= subjects; i++){
		cout << "Grade of subject " << i << ": ";	
		cin >> grade;
		switch(grade){
			case 'S':
				points += 10;
				break;
			case 'A':
				points += 9;
				break;
			case 'B':
				points += 8;
				break;
			case 'C':
				points += 7;
				break;
			case 'D':
				points += 6;
				break;
			case 'E':
				points += 5;
				break;
			case 'F':
				points += 0;
				break;
			default :
				cout << "Wrong input. Enter again.\n";
				i--;
		}
	}
	cout.precision(2);
	cout << "The average of grade points: " << static_cast<double>(points) / subjects << endl;
	return 0;
}
