#include<iostream>
#include<vector>
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
     Pizza(int size, int type, int pepperoniToppings, int cheeseToppings);
     ~Pizza(){}
     int getPepperoniToppings(){return pepperoniToppings;}
     void setPepperoniToppings(int numPepperoni){this -> pepperoniToppings = numPepperoni;}
     int getCheeseToppings(){return cheeseToppings;}
     void setCheeseToppings(int numCheese){this -> cheeseToppings = numCheese;}
     int getSize(){return size;}
     void setSize(int newSize){this -> size = newSize;}
     int getType(){return type;}
     void setType(int newType){this -> type = newType;}
     void outputDescription();
     double computePrice();
  private:
     int size, type, pepperoniToppings, cheeseToppings;
};

class Order{
	public:
		Order(){}
		void addPizza(Pizza pizza){order.push_back(pizza);}
		void outputOrder();
	private:
		vector<Pizza> order;
};

int main(){
	Order order;
	order.addPizza(Pizza(SMALL, HANDTOSSED, 0, 3));
	order.addPizza(Pizza(LARGE, PAN, 2, 1));
	order.outputOrder();
	return 0;
}

Pizza::Pizza(int size, int type, int pepperoniToppings, int cheeseToppings){
	this -> size = size;
	this -> type = type;
	this -> pepperoniToppings = pepperoniToppings;
	this -> cheeseToppings = cheeseToppings;
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
	cout << "with " << pepperoniToppings << " pepperoni toppings and " << cheeseToppings << " cheese toppings.\n";
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

void Order::outputOrder(){
	double total = 0;
	cout << "There are " << order.size() << " pizzas in the order.\n";
	for(unsigned int i = 0; i < order.size(); i++){
		order.at(i).outputDescription();
		total += order.at(i).computePrice();
	}
	cout << "The total price is $" << total << endl;
}
