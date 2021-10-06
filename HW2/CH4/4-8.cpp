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

void input(double&, double&);
void calculate(double, double, double&, double&);
void output(double, double);

int main(){
	double pound, ounce, kilogram, gram;
	int option;
	while(true){
		input(kilogram, gram);
		calculate(kilogram, gram, pound, ounce);
		output(pound, ounce);
		cout << "Enter 0 to exit, other numbers to clculate again.\n";
		cin >> option;
		if(option == 0)
			return 0;	
	}
}

void input(double& kilogram, double& gram){
	cout << "Input kilogram : ";
	cin >> kilogram;
	cout << "Input gram : ";
	cin >> gram;
}
void calculate(double kilogram, double gram, double& pound, double& ounce){
	pound = (gram * GRAM_TO_KILOGRAM + kilogram) * KILOGRAM_TO_POUND;
	ounce = (pound - static_cast<int>(pound)) * POUND_TO_OUNCE;
	pound = static_cast<int>(pound);
}
void output(double pound, double ounce){
	cout << "Weight: " << static_cast<int>(pound) << " pounds and " << ounce << " ounces.\n\n";
}
