#include<iostream>

using namespace std;
//size
const int SMALL = 0;
const int MEDIUM = 1;
const int LARGE = 2;
//type
const int DEEPDISH = 0;
const int HANDTOSSED = 1;
const int PAN = 2;

class Pizza
{
  public:
     Pizza();
     ~Pizza();
     int getPepperoniToppings();
     void setPepperoniToppings(int numPepperoni);
     int getCheeseToppings();
     void setCheeseToppings(int numCheese);
     int getSize();
     void setSize(int newSize);
     int getType();
     void setType(int newType);
     void outputDescription();
     double computePrice();
  private:
     int size, type, pepperoniToppings, cheeseToppings;
};

int main(){
	Pizza pizza1, pizza2;
	pizza1.setSize(SMALL);
	pizza1.setType(HANDTOSSED);
	pizza1.setPepperoniToppings(0);
	pizza1.setCheeseToppings(3);
	pizza1.outputDescription();
	pizza2.setSize(LARGE);
	pizza2.setType(PAN);
	pizza2.setPepperoniToppings(2);
	pizza2.setCheeseToppings(1);
	pizza2.outputDescription();
	return 0;
}

Pizza::Pizza(){

}

Pizza::~Pizza(){

}

int Pizza::getPepperoniToppings(){
	return pepperoniToppings;
}

void Pizza::setPepperoniToppings(int numPepperoni){
	this -> pepperoniToppings = numPepperoni;
}

int Pizza::getCheeseToppings(){
	return cheeseToppings;
}

void Pizza::setCheeseToppings(int numCheese){
	this -> cheeseToppings = numCheese;
}

int Pizza::getSize(){
	return size;
}

void Pizza::setSize(int newSize){
	this -> size = newSize;
}

int Pizza::getType(){
	return type;
}

void Pizza::setType(int newType){
	this -> type = newType;
}

void Pizza::outputDescription(){
	cout << "This pizza is : ";
	switch(size){
		case 0:
			cout << "Small, ";
			break;
		case 1:
			cout << "Medium, ";
			break;
		case 2:
			cout << "Large, ";
			break;
	}
	switch(type){
		case 0:
			cout << "Deep dish, ";
			break;
		case 1:
			cout << "Hand tossed, ";
			break;
		case 2:
			cout << "Pan, ";
			break;
	}
	cout << "with " << pepperoniToppings << " pepperoni toppings and " << cheeseToppings << " cheese toppings.\nPrice of pizza : " << computePrice() << endl;
}

double Pizza::computePrice(){
	switch(size){
		case 0:
			return 10.0 + 2 * (pepperoniToppings + cheeseToppings);
		case 1:
			return 14.0 + 2 * (pepperoniToppings + cheeseToppings);
		case 2:
			return 17.0 + 2 * (pepperoniToppings + cheeseToppings);
	}
	return -1;//should not happen
}


