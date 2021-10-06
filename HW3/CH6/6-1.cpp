#include<iostream>
#include<fstream>

using namespace std;

struct EmployeeRecord{
	int id;
	int core;
	int performance;
	int ideation;
	double total;
	int point;
};

int main(){
	ifstream finput("CH6_01_data.txt");
	finput.ignore(30, EOF);//ignore first line
	EmployeeRecord record[5];
	int i = 0;
	while(finput >> record[i].id && i < 5){
		finput >> record[i].core;
		finput >> record[i].performance;
		finput >> record[i].ideation;
		i++;
	}
	finput.close();
/*	for(i = 0; i < 5; i++){
		cout << record[i].id << " " << record[i].core << " " << record[i].performance << " " << record[i].ideation << endl;
	}*///check data
	for(i = 0; i < 5; i++){
		record[i].total = record[i].core * 2.0 / 2 * 3  + record[i].performance * 2.0 / 6 * 5 + record[i].ideation * 2.0 / 2 * 2;//sum and normalize
		if(record[i].total >= 80)
			record[i].point = 1;
		else if(record[i].total >= 60)
			record[i].point = 2;
		else if(record[i].total >= 50)
			record[i].point = 3;
		else
			record[i].point = 4;
	}
	cout << "Number\tTotal\tPoint\n";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	for(i = 0; i < 5; i++)
		cout << record[i].id << "\t" << record[i].total << "\t" << record[i].point << endl;
	return 0;
}
