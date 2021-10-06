#include<iostream>

using namespace std;

const double POUND_TO_OUNCE = 16.0;
const double KILOGRAM_TO_POUND = 2.21;

class Weight{
	public:
		void setWeightPounds(double weightPounds);
		void setWeightKilograms(double weightKilograms);
		void setWeightOunces(double weightOunces);
		double weightKilograms();
		double weightOunces();
		void output();
	private:
		double weightPounds;
};

int main(){
	Weight user;
	double set;
	cout << "Set kilograms = ";
	cin >> set;
	user.setWeightKilograms(set);
	user.output();
	cout << "Set Pounds = ";
	cin >> set;
	user.setWeightPounds(set);
	user.output();
	cout << "Set Ounces = ";
	cin >> set;
	user.setWeightOunces(set);
	user.output();
}

void Weight::setWeightPounds(double weightPounds){
	this->weightPounds = weightPounds;
}
void Weight::setWeightKilograms(double weightKilograms){
	weightPounds = weightKilograms * KILOGRAM_TO_POUND;
}
void Weight::setWeightOunces(double weightOunces){
	weightPounds = weightOunces / POUND_TO_OUNCE;
}
double Weight::weightKilograms(){
	return weightPounds / KILOGRAM_TO_POUND;
}
double Weight::weightOunces(){
	return weightPounds * POUND_TO_OUNCE;
}
void Weight::output(){
	cout << "> In Kilograms : " << weightKilograms() << endl;
	cout << "> In Pounds : " << weightPounds << endl;
	cout << "> In Ounces : " << weightOunces() << endl << endl;
}
