#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> grades;
	int grade;
	cout << "Enter each grade and than -1 to stop.\n";
	while(true){
		cin >> grade;
		if(grade == -1)
			break;
		else if(grade < -1)
			cout << "Invalid score. Skipped.\n";
		else
			grades.push_back(grade);
	}
	if(grades.size() == 0){
		cout << "No score. Exiting.\n";
		return 0;
	}
	int max = grades.at(0);
	for(unsigned int i = 1; i < grades.size(); i++)
		if(max < grades.at(i))
			max = grades.at(i);
	for(int i = 0; i <= max; i++){
		int total = 0;
		for(unsigned int j = 0; j < grades.size(); j++)
			if(grades.at(j) == i)
				total++;
		cout << total << " grade(s) of " << i << endl;
	}
	return 0;
}
