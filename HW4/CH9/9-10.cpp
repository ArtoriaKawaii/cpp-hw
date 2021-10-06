#include<iostream>
#include<string>

using namespace std;

class Trivia{
	public:
		Trivia();
		Trivia(string question, string answer, int value);
		string getQuestion() const;
		string getAnswer() const;
		int getValue() const;
		bool check(string answer) const;
	private:
		string question, answer;
		int value;
};

int main(){
	int point = 0;
	Trivia questions[5] = {Trivia("Year that Amelia Earhart disappeared?", "1938", 2),
						   Trivia("Which season that children will growth faster?", "spring", 4),
						   Trivia("Can human keep the eyes open when sneezeing?", "no", 6),
						   Trivia("Which muscle of human body is the strongest?", "tongue", 8), 
						   Trivia("What is the 49th state admitted to the USA? (Case-sensitive)", "Alaska", 10)};
	cout << "Trivia Game!\n";
	for(int i = 0; i < 5; i++){
		cout << "You have $" << point << endl;
		cout << questions[i].getQuestion() << endl;
		string answer;
		cin >> answer;
		if(questions[i].check(answer)){
			cout << "That's right! You win $" << questions[i].getValue() << endl;
			point += questions[i].getValue();
		}
		else
			cout << "Sorry, the correct answer is: " << questions[i].getAnswer() << endl;
	}
	cout << "Game over. Your total winnings are: $" << point << endl;
	return 0;
}

Trivia::Trivia(){
}
Trivia::Trivia(string question, string answer, int value){
	this->question = question;
	this->answer = answer;
	this->value = value;
}
string Trivia::getQuestion() const{
	return question;
}
string Trivia::getAnswer() const{
	return answer;
}
int Trivia::getValue() const{
	return value;
}
bool Trivia::check(string answer) const{
	return (this->answer == answer);
}
