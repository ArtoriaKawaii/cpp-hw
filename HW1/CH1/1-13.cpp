#include<iostream>
using namespace std;

int main(){
	double caffeine;
	cout.setf(ios :: fixed);
	cout.setf(ios ::showpoint);
	cout << "Enter the number of mg of caffeine in a drink: ";
	cin >> caffeine;
	cout.precision(2);
	cout << "The number of drinks it'll take to kill someone: " << 10 * 1000 / caffeine << endl;
	return 0;
}




