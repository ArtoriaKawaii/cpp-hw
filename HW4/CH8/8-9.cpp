#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<vector>
using namespace std;

class BoxOfProduce{
	public:
		BoxOfProduce();
		void addItems();
		void output() const;
		friend const BoxOfProduce operator+(const BoxOfProduce& box1, const BoxOfProduce& box2);
	private:
		vector<string> items;
		string list[5];
		void initializeList();
};

int main(){
	BoxOfProduce box1, box2;
	srand(time(NULL));
	box1.addItems();
	box1.addItems();
	box1.output();
	cout << endl;
	box2.addItems();
	box2.addItems();
	box2.addItems();
	box2.addItems();
	box2.output();
	cout << endl;
	(box1 + box2).output();
	cout << endl;
}

const BoxOfProduce operator+(const BoxOfProduce& box1, const BoxOfProduce& box2){
	BoxOfProduce box;
	for(unsigned int i = 0; i < box1.items.size(); i++)
		box.items.push_back(box1.items.at(i));
	for(unsigned int i = 0; i < box2.items.size(); i++)
		box.items.push_back(box2.items.at(i));
	return box;
}

BoxOfProduce::BoxOfProduce(){
	initializeList();
}

void BoxOfProduce::addItems(){
	items.push_back(list[rand() % 5]);
}

void BoxOfProduce::output() const{
	cout << "The box contains : ";
	for(unsigned int i = 0; i < items.size(); i++)
		cout << "(" << i+1 << ")" << items.at(i) << " ";
}

void BoxOfProduce::initializeList(){
	ifstream finput("produce.txt");
	for(int i = 0; finput >> list[i] && i < 5; i++);
	finput.close();
}
