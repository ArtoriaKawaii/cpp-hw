#include<iostream>
using namespace std;

int futureChildHeight_inches(int gender, int heightOfMon_inches, int heightOfDad_inches);

const int FEET_TO_INCH = 12;
int main(){
	int gender, option, heightOfMon_feet, heightOfMon_inch, heightOfDad_feet, heightOfDad_inch, 			heightOfMon_inches, heightOfDad_inches;
	while(true){
		cout << "Enter the gender of your future child.\nUse 1 for male, 0 for female.\n";
		cin >> gender;
		if(gender != 1 && gender != 0){
			cout << "Undefined gender. Enter again.\n";
			continue;
		}
		cout << "Enter the height in feet and inches of mon.\n";
		cin >> heightOfMon_feet >> heightOfMon_inch;
		cout << "Enter the height in feet and inches of dad.\n";
		cin >> heightOfDad_feet >> heightOfDad_inch;
		heightOfMon_inches = heightOfMon_feet * FEET_TO_INCH + heightOfMon_inch;
		heightOfDad_inches = heightOfDad_feet * FEET_TO_INCH + heightOfDad_inch;
		cout << "Your future child is estimated to grow to " 
		  << futureChildHeight_inches(gender, heightOfMon_inches, heightOfDad_inches) / FEET_TO_INCH 
		  << " feet and " 
		  << futureChildHeight_inches(gender, heightOfMon_inches, heightOfDad_inches) % FEET_TO_INCH 
		  << " inches.\n";
		cout << "Enter 1 to repeat, other number to end.\n";
		cin >> option;
		if(option != 1)
			return 0;
	}
}

int futureChildHeight_inches(int gender, int heightOfMon_inches, int heightOfDad_inches){
	if(gender == 1)
		return static_cast<int>((heightOfMon_inches * 13 / 12 + heightOfDad_inches) / 2);
	else if(gender == 0)
		return static_cast<int>((heightOfDad_inches * 12 / 13 + heightOfMon_inches) / 2);

}
