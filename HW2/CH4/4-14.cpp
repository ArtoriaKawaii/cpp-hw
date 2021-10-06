#include<iostream>
#include<string>
using namespace std;

bool check(int time);
int diff(int startTime, int endTime);

int main(){
	string startTime_s, endTime_s;
	int startTime, endTime;
	cout << "Please input start time and end time: ";
	cin >> startTime_s >> endTime_s ;
	if(startTime_s.length() != 4 || endTime_s.length() != 4){
		cout << "Input time error." << endl;
		return 0;	
	}
	else{
		startTime = stoi(startTime_s);
		endTime = stoi(endTime_s);
		if(check(startTime) && check(endTime)){
			cout << "The time difference between " << startTime_s << " and " << endTime_s << " is " << diff(startTime, endTime) <<" minutes." << endl;
			return 0;
		}
		else{
			cout << "Input time error." << endl;
			return 0;
		}	
	}
}
bool check(int time){
	return (time / 100 >= 0 && time / 100 < 24 && time % 100 >= 0 && time % 100 < 60);
}
int diff(int startTime, int endTime){
	if(endTime < startTime)
		return ((endTime / 100 + 24) * 60 + endTime % 100) - ((startTime / 100) * 60 + startTime % 100);
	else
		return ((endTime / 100) * 60 + endTime % 100) - ((startTime / 100) * 60 + startTime % 100);
}
