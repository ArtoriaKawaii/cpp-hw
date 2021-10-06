#include<iostream>
using namespace std;

int main(){
	int distance, time;
	double charge = 2;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout << "Input distance(km) and time(minute): ";
	cin >> distance >> time;
	if(distance > 2 && distance <= 2 + 6){
		charge += (distance - 2) * 0.5;
	}
	else if(distance > 2 + 6){
		charge += (distance - 2 - 6) * 1 + 6 * 0.5;
	}
	cout.precision(2);
	charge += time * 0.2;
	cout << "Total charge: " << charge << endl;
	return 0;
}
