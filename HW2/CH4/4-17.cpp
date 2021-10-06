#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int getPlayerScore(string name);
void isAverage(int targetScore, int average);
vector<string> names;
vector<int> scores;

int main(){
	string name;
	int score, total = 0, average;
	bool checkName = false;
	ifstream file;
	file.open("scores.txt");
	while(file >> name && file >> score){
		names.push_back(name);
		scores.push_back(score);
	}
	for(unsigned int i = 0; i < scores.size(); i++)
		total += scores.at(i);
	average = total / scores.size();
	cout << "Average is " << average << endl;
	cout << "Please enter player's name : ";
	cin >> name;
	for(unsigned int i = 0; i < names.size(); i++)
		if(name == names.at(i))
			checkName = true;
	if(checkName){
		cout << name << " : " << getPlayerScore(name);
		isAverage(getPlayerScore(name), average);
	}
	else
		cout << "The player is not found in the file." << endl;
	file.close();	
	return 0; 
}

int getPlayerScore(string name){
	unsigned int nameIndex;
	for(nameIndex = 0; nameIndex < names.size(); nameIndex++)
		if(name == names.at(nameIndex))
			break;
	return scores.at(nameIndex);
}

void isAverage(int targetScore, int average){
	if(targetScore > average)
		cout << " is higher than the average." << endl;
	else if(targetScore == average)
		cout << " equals to the average." << endl;
	else
		cout << " is lower than the average." << endl;
}
