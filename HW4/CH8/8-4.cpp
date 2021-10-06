#include<iostream>
#include<cstdlib>

using namespace std;

class CharPair{
	public:
		CharPair();
		CharPair(int sz);
		CharPair(int sz, char ch[]);
		int getSize() const;
		void clear();
		char& operator[](int index);
//		friend ostream& operator<<(ostream& outputStream, const CharPair& cp);
	private:
		char ch[100] = {'\0'};
		int size;
};

int main(){
	CharPair cp;
	cout << "Default output(10) : ";
	for(int i = 0; i < cp.getSize(); i++)
		cout << cp[i] << " ";
	cout << "\nSize : " << cp.getSize() << endl;
	cp.clear();
	cout << "-----Clear array-----\n";
	cout << "First sz number of the char array to # : ";
	int sz;	
	cin >> sz;
	cp = CharPair(sz);
	for(int i = 0; i < cp.getSize(); i++)
		cout << cp[i] << " ";
	cout << "\nSize : " << cp.getSize() << endl;
	cp.clear();
	cout << "-----Clear array-----\n";
	cout << "First sz number of the char array to ? : ";
	char ch;
	cin >> sz >> ch;
	char chArr[sz];
	for(int i = 0; i < sz; i++)
		chArr[i] = ch;
	cp = CharPair(sz, chArr);
	for(int i = 0; i < cp.getSize(); i++)
		cout << cp[i] << " ";
	cout << "\nSize : " << cp.getSize() << endl;
}

/*ostream& operator<<(ostream& outputStream, const CharPair& cp){
	for(int i = 0; i < size; i++)
		output << ch[i] << " ";
	return outputStream;
}*/

CharPair::CharPair(){
	size = 10;
	for(int i = 0; i < size; i++)
		ch[i] = '#';
}

CharPair::CharPair(int sz){
	if(sz > 100){
		cout << "Size need to <= 100\n";
		exit(1);
	}
	else{
		size = sz;
		for(int i = 0; i < size; i++)
			ch[i] = '#';
	}
}

CharPair::CharPair(int sz, char ch[]){
	if(sz > 100){
		cout << "Size need to <= 100\n";
		exit(1);
	}
	else{
		size = sz;
		for(int i = 0; i < size; i++)
			this->ch[i] = ch[i];
	}
}

int CharPair::getSize() const{
	return size;
}

void CharPair::clear(){
	for(int i = 0; i < size; i++)
		ch[i] = {'\0'};
	size = 0;
}

char& CharPair::operator[](int index){
	if(index < size)
		return ch[index];
	else{
		cout << "Illegal index value.\n";
		exit(1);	
	}
}
