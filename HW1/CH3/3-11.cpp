#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);

int main(){
	int humanTotalScore = 0, computerTotalScore = 0;
	srand(time(NULL));
	while(true){
		humanTotalScore += humanTurn(humanTotalScore);
		if(humanTotalScore >= 100){
			cout << "You win.\n";
			return 0;
		}
		computerTotalScore += computerTurn(computerTotalScore);
		if(computerTotalScore >= 100){
			cout << "Computer win.\n";
			return 0;
		}
	}
}

int humanTurn(int humanTotalScore){
	char option;
	int score, roundScore = 0;

	while(true){
		cout << "It's your turn. Enter 'r' to roll, 'h' to hold\n";
		cin >> option;
		if(option == 'r'){
			score = rand() % 6 + 1;
			cout << "You roll " << score << ".\n";
			if(score == 1){
				cout << "You lose your turn.\n";
				cout << "----------------------------------------------\n";
				return 0;
			}
			else{
				roundScore += score;
				cout << "Your score at this round " << roundScore << ".\n";
				cout << "If you hold, your total score is "
				     << humanTotalScore + roundScore << ".\n";	
			}
		}
		else if(option == 'h'){
			cout << "----------------------------------------------\n";
			return roundScore;
		}
		else{
			cout << "Wrong command.\n";
			continue;
		}
	}
}
int computerTurn(int computerTotalScore){
	int score, roundScore = 0;
	cout << "It's computer's turn.\n";
	while(true){
		score = rand() % 6 + 1;
		cout << "Computer rolls " << score << ".\n";
		if(score == 1){
			cout << "Computer lose it's turn.\n";
			cout << "----------------------------------------------\n";
			return 0;
		}
		else{
			roundScore += score;
			cout << "Computer's score at this round is " << roundScore <<".\n";
			cout << "If computer holds, it's total score is "
			     << computerTotalScore + roundScore << ".\n";
			if(roundScore >= 20){
				cout << "Computer holds.\n";
				cout << "----------------------------------------------\n";
				return roundScore;
			}
		}
	}
}
