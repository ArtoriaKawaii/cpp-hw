#include<iostream>
#include<string>
#include<cctype>

using namespace std;

string decrypt(const string& code);

int main(){
	while(true){
		string code;
		cout << "When enter a single \"-1\" in one line, this program will end.\n";
		getline(cin, code);
		if(code == "-1")
			return 0;
		cout << decrypt(code) << endl;
	}
}

string decrypt(const string& code){
	string decrypt(code);
	for(unsigned int i = 0; i < code.length(); i++){
		if(isalpha(code.at(i))){
			if(isalpha(code.at(i) + 3))
				decrypt.at(i) = code.at(i) + 3;
			else
				decrypt.at(i) = code.at(i) + 3 - 26;
		}
		else if(isdigit(code.at(i))){
			if(code.at(i) + 5 >= 10)
				decrypt.at(i) = code.at(i) + 5 - 10;
			else
				decrypt.at(i) = code.at(i) + 5;
		}
		else if(isspace(code.at(i)))
			decrypt.at(i) = '\0';
		else if(ispunct(code.at(i)))
			decrypt.at(i) = ' ';
		else
			decrypt.at(i) = code.at(i);
	}
	return decrypt;
}
