#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;

class BoxOfProduce{
	public:
		BoxOfProduce();
		string* getItems();
		void setItem();
		void substitute();
		void output();
	private:
		string items[3];
		string list[5];
};

int main(){
	BoxOfProduce box;
	string option;
	while(true){
		box.output();
		cout << "Enter 'c' to change a bundle.\n";
		cout << "Enter 'q' to quit.\n";
		cin >> option;
		if(!option.compare("c"))//string1.compare(string2) return 0 if string1 == string2
			box.substitute();
		else if(!option.compare("q")){
			cout << "Final Contents : \n";
			box.output();
			return 0;
		}
		else
			cout << "Invalid option.\n";
	}
}

BoxOfProduce::BoxOfProduce(){
	setItem();
}
string* BoxOfProduce::getItems(){
	string* items_copy = items;
	return items_copy;
}
void BoxOfProduce::setItem(){
	ifstream finput("produce.txt");
	for(int i = 0; finput >> list[i] && i < 5; i++);
	srand(time(NULL));
	for(int i = 0; i < 3; i++)
		items[i] = list[rand() % 5];
}
void BoxOfProduce::substitute(){
	int index;
	string substitution;
	cout << "Enter index of item to change.\n";
	cin >> index;
	if(index > 3 || index < 1)
		cout << "Please enter the correct index. (1 ~ 3)\n";
	else{
		cout << "Enter item to substitute.\n";
		cin >> substitution;
		bool findFlag = false;
		for(int i = 0; i < 5; i++){
			if(substitution.compare(list[i]) == 0){
				findFlag = true;
				break;			
			}
		}
		if(findFlag)
			items[index - 1] = substitution;
		else
			cout << "Item is not on the list of five items.\n";
	}
}
void BoxOfProduce::output(){
	cout << "The box contains : (1)" << items[0] << " (2)" << items[1] << " (3)" << items[2] << endl;
}
