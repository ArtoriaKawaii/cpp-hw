#include<iostream>
#include<string>
#include<cctype>

using namespace std;

string replaceWithLove(const string& line);

int main(){
	while(true){
		string line;
		cout << "Input line : \n";
		getline(cin, line);
		cout << replaceWithLove(line) << endl;
		cout << "Repeat? Enter 'Y' to repeat, others to quit : ";
		char option;
		cin >> option;
		if(option != 'Y')
			return 0;
		else
			cin.ignore(100, '\n');//avoid getline() from reading '\n'
	}
}

string replaceWithLove(const string& line){
	string replace = line;
	for(int index = 0; index < (int)(replace.length()) - 3; index++){
		if(isalpha(replace.at(index)) && isalpha(replace.at(index+1)) && isalpha(replace.at(index+2)) && isalpha(replace.at(index+3))){
			if(index+4 != (int)(replace.length()) && isalpha(replace.at(index+4))){//skip the word which length > 4
				while(isalpha(replace.at(index+4)))
					index++;
				continue;
			}
			if(isupper(replace.at(index)))
				replace.replace(index, 4, "Love");//str::replace(pos,len,replacement,rep.pos,rep.len);
			else
				replace.replace(index, 4, "love");
		}
	}
	return replace;
}
