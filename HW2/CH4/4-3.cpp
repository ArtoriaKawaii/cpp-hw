#include<iostream>
using namespace std;

void use(int itemCode, double& voucherValue, double item1, double item2, double item3, double item4);

int main(){
	int itemCode;
	double voucherValue, item1, item2, item3, item4;
	cout.setf(ios :: fixed);
	cout.setf(ios :: showpoint);
	cout.precision(2);
	cout << "1.Bagel: ";
	cin >> item1;
	cout << "2.Cake: ";
	cin >> item2;	
	cout << "3.Croissant: ";
	cin >> item3;
	cout << "4.Toast: ";
	cin >> item4;	
	cout << "Input your value of voucher: ";
	cin >> voucherValue;
	while(true){
		if(voucherValue < item1 && voucherValue < item2 && voucherValue < item3 && voucherValue < item4){
			cout << "You don't have enough money to buy anything.\n";
			return 0;
		}
		cout << "Which item do you want? ";
		cin >> itemCode;
		use(itemCode, voucherValue, item1, item2, item3, item4);
		cout << "You still have value of voucher: " << voucherValue << endl << endl;
	}
}

void use(int itemCode, double& voucherValue, double item1, double item2, double item3, double item4){
	switch(itemCode){
		case 1:
			cout << "\nThe price of item you buy: " << item1 << endl;
			if(voucherValue < item1){
				cout << "Not enough money.\n";
				break;				
			}
			else{
				voucherValue -= item1;
				break;
			}	
		case 2:
			cout << "\nThe price of item you buy: " << item2 << endl;
			if(voucherValue < item2){
				cout << "Not enough money.\n";
				break;				
			}
			else{
				voucherValue -= item2;
				break;
			}
		case 3:
			cout << "\nThe price of item you buy: " << item3 << endl;
			if(voucherValue < item3){
				cout << "Not enough money.\n";
				break;				
			}
			else{
				voucherValue -= item3;
				break;
			}
		case 4:
			cout << "\nThe price of item you buy: " << item4 << endl;
			if(voucherValue < item4){
				cout << "Not enough money.\n";
				break;				
			}
			else{
				voucherValue -= item4;
				break;
			}
		default:
			cout << "\nItem not found.\n";
	}
}
