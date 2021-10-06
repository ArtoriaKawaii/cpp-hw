#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Player{
	public:
		Player(string name, int score);
		string getName(){return name;}
		int getScore(){return score;}
		void output();
	private:
		string name;
		int score;
};

int main(){
	vector<Player> playerList;
	while(true){
		cout << "\nEnter an option.\n";
		cout << "a. Add new player and score.\n";
		cout << "b. Print all players and scores.\n";
		cout << "c. Search for a player's score.\n";
		cout << "d. Remove a player.\n";
		cout << "e. Quit.\n";
		char option;
		cin >> option;
		switch(option){
			case 'a':{
				cout << "\nEnter new player name.\n";
				string name;
				cin >> name;
				cout << "Enter new player score.\n";
				int score;
				cin >> score;
				playerList.push_back(Player(name, score));
				break;
			}
			case 'b':
				cout << "\nPlayer\t\tScores\n";
				for(unsigned int i = 0; i < playerList.size(); i++)
					playerList.at(i).output();
				break;
			case 'c':{
				cout << "\nWhich player to search for?\n";
				string name;
				bool flag = false;
				int score;
				cin >> name;
				for(unsigned int i = 0; i < playerList.size(); i++){
					if(playerList.at(i).getName().compare(name) == 0){
						score = playerList.at(i).getScore();
						flag = true;
					}
				}
				if(flag)
					cout << "The score of " << name << " is " << score << endl;
				else
					cout << "Player " << name << " not found.\n";
				break;
			}
			case 'd':{
				cout << "\nWhich player to remove?\n";
				string name;
				bool flag = false;
				unsigned int index;
				cin >> name;
				for(index = 0; index < playerList.size(); index++)
					if(playerList.at(index).getName().compare(name) == 0)
						flag = true;
				if(flag){
					cout << "Player " << name << " removed.\n";
					playerList.erase(playerList.begin()+index);
				}
				else
					cout << "Player " << name << " not found.\n";
				break;
			}
			case 'e':
				cout << "Exiting...\n";
				return 0;
			default:
				cout << "Invalid command. Enter again.\n";		
		}
	}
}

Player::Player(string name, int score){
	this->name = name;
	this->score = score;
}

void Player::output(){
	cout << name << "\t\t" << score << endl;
}
