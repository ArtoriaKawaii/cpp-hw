#include<iostream>
using namespace std;

int main(){
	double ans, guess, r;
	int n; 
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout << "Enter an integer to estimate it's square root: ";
	cin >> n;
	guess = n / 2.0;
	for(int i = 0; i < 5; i++){
		r = n / guess;
		guess = (guess + r) / 2.0;
	}
	cout.precision(2);
	cout << "The estimated square root of " << n << " is " << guess << endl;
	return 0;
}
