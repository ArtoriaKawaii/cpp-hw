#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	cout << "Please input the string : ";
	getline(cin, str);
	for(unsigned int i = 0; i < str.length(); i++){
		switch(str.at(i)){
			case 'a':
				a++;
				break;
			case 'e':
				e++;
				break;
			case 'i':
				i++;
				break;
			case 'o':
				o++;
				break;
			case 'u':
				u++;
				break;
		}
	}
	cout << "Vowel\tCount\n";
	cout << "a\t" << a << endl;
	cout << "e\t" << e << endl;
	cout << "i\t" << i << endl;
	cout << "o\t" << o << endl;
	cout << "u\t" << u << endl;
	return 0;
}
