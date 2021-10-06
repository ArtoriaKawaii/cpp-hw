#include<iostream>
using namespace std;

double hatSize(double height, double weight);
double jacketSize(double height, double weight, int age);
double waistInInches(double weight, int age);

int main(){
	double height, weight;
	int age;
	char option;
	cout.setf(ios :: fixed);
	cout.setf(ios :: showpoint);
	cout.precision(2);
	while(true){
		cout << "Enter height, weight, age to convert into hat size, jacket size(inches at chest) and waist size in inches.\n";
		cin >> height >> weight >> age;
		cout << "Hat size: " << hatSize(height, weight) << endl 
			<< "Jacket size: " << jacketSize(height, weight, age) << endl 
			<< "Waist size: " << waistInInches(weight, age) << endl;
		cout << "Enter 'Y' to repeat, other character to end.\n";
		cin >> option;
		if(option != 'Y')
			return 0;
	}
}

double hatSize(double height, double weight){
	return weight / height * 2.9;
}
double jacketSize(double height, double weight, int age){
	if(age > 30)
		return height * weight / 288 + (age - 30) / 10 * (1 / 8);
	else
		return height * weight / 288;
}
double waistInInches(double weight, int age){
	if(age > 28)
		return weight / 5.7 + (age - 28) / 2 * (1 / 10);
	else
		return weight / 5.7;
}


