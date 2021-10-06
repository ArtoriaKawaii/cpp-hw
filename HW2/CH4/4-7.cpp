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
	cout.setf(ios :: fixed);
	cout.setf(ios :: showpoint);
	cout.precision(3);
	while(true){
		input(pound, ounce);
		calculate(pound, ounce, kilogram, gram);
		output(kilogram, gram);
		cout << "Enter 0 to exit, other numbers to clculate again.\n";
		cin >> option;
		if(option == 0)
			return 0;	
	}
}

void input(double& pound, double& ounce){
	cout << "Input pounds : ";
	cin >> pound;
	cout << "Input ounces : ";
	cin >> ounce;
}
void calculate(double pound, double ounce, double& kilogram, double& gram){
	kilogram = (ounce * OUNCE_TO_POUND + pound) * POUND_TO_KILOGRAM;
	gram = (kilogram - static_cast<int>(kilogram)) * KILOGRAM_TO_GRAM;
	kilogram = static_cast<int>(kilogram);
}
void output(double kilogram, double gram){
	cout << "Weight: " << static_cast<int>(kilogram) << "kg and " << gram << "g.\n\n";
}
