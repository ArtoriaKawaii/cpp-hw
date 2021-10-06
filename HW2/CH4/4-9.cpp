#include<iostream>
using namespace std;
/*
1 kilogram = 2.2046pounds
1 pound = 16ounces
*/
const double KILOGRAM_TO_POUND = 2.2046;
const int POUND_TO_OUNCE = 16;
const double POUND_TO_KILOGRAM = 1.0 / KILOGRAM_TO_POUND;
const double OUNCE_TO_POUND = 1.0 / POUND_TO_OUNCE;
const int KILOGRAM_TO_GRAM = 1000;
const double GRAM_TO_KILOGRAM = 1.0 / 1000;

void inputKgAndG(double&, double&);
void inputPoundAndOunce(double&, double&);
void calculateFromKgToPound();
void calculateFromPoundToKg();
void outputKgAndG(double, double);
void outputPoundAndOunce(double, double);

int main(){
	int option;
	while(true){
		cout << "Enter 1 to convert pound and ounce to kg and g." << endl;
		cout << "Enter 2 to convert kg and g to pound and ounce." << endl;
		cin >> option;
		if(option == 1){
			calculateFromPoundToKg();
		}
		else if(option == 2){
			calculateFromKgToPound();
		}
		else{
			cout << "Command not found.";
			continue;
		}
		cout << "Enter 0 to exit, other numbers to calculate again." << endl;
		cin >> option;
		if(option == 0)
			return 0;
	}
}

void inputKgAndG(double& kilogram, double& gram){
	cout << "Input kilogram : ";
	cin >> kilogram;
	cout << "Input gram: ";
	cin >> gram;
}
void inputPoundAndOunce(double& pound, double& ounce){
	cout << "Input pounds : ";
	cin >> pound;
	cout << "Input ounces : ";
	cin >> ounce;
}
void calculateFromKgToPound(){
	double kilogram, pound, gram, ounce;
	inputKgAndG(kilogram, gram);
	pound = (gram * GRAM_TO_KILOGRAM + kilogram) * KILOGRAM_TO_POUND;
	ounce = (pound - static_cast<int>(pound)) * POUND_TO_OUNCE;
	pound = static_cast<int>(pound);
	outputPoundAndOunce(pound, ounce);
}
void calculateFromPoundToKg(){
	double kilogram, pound, gram, ounce;
	inputPoundAndOunce(pound, ounce);
	kilogram = (ounce * OUNCE_TO_POUND + pound) * POUND_TO_KILOGRAM;
	gram = (kilogram - static_cast<int>(kilogram)) * KILOGRAM_TO_GRAM;
	kilogram = static_cast<int>(kilogram);
	outputKgAndG(kilogram, gram);
}
void outputKgAndG(double kilogram, double gram){
	cout << "Weight: " << static_cast<int>(kilogram) << "kg and " << gram << "g.\n\n";
}
void outputPoundAndOunce(double pound, double ounce){
	cout << "Weight: " << static_cast<int>(pound) << " pounds and " << ounce << " ounces.\n\n";
}
