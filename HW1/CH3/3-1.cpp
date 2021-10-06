#include<iostream>
using namespace std;

const int KBIT_TO_MBYTE = 8000;

double conversion(double bitRate, double minutes);

int main(){
	double bitRate, minutes;
	cout.setf(ios :: fixed);
	cout.setf(ios :: showpoint);
	cout << "Bit rate(kilobit / second): ";
	cin >> bitRate;
	cout << "Minutes of a video clip: ";
	cin >> minutes;
	cout.precision(2);
	cout <<  "File size of the video clip in megabytes: " << conversion(bitRate, minutes) << endl;
	return 0;
}

double conversion(double bitRate, double minutes){
	return bitRate * minutes * 60 / KBIT_TO_MBYTE;
}
