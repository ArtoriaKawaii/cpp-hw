#include<iostream>
#include<string>
using namespace std;

int main(){
	int option, num;
	int remain[] = {20, 15, 15, 20, 20}, cart[5] = {0};
	string choice;	
	cout << "Code\tFlavor\n";
	cout << "1\tChocolate\n";
	cout << "2\tVanilla\n";
	cout << "3\tStrawberry\n";
	cout << "4\tRaspberry\n";
	cout << "5\tButterscotch\n";
	while(true){
		cout << "The products remain in the stock\n";		
		for(int i = 0; i < 5; i++)
			cout << i + 1 << "\t" << remain[i] << endl;
		cout << "Choice you like : ";
		cin >> choice >> num;
		if(choice == "Chocolate"){
			if(remain[0] < num)
				cout << "The chocolate is not enough.\n";
			else{
				remain[0] -= num;
				cart[0] +=num;
			}
		}
		else if(choice == "Vanilla"){
			if(remain[1] < num)
				cout << "The vanilla is not enough.\n";
			else{
				remain[1] -= num;
				cart[1] += num;
			}
		}
		else if(choice == "Strawberry"){
			if(remain[2] < num)
				cout << "The strawberry is not enough.\n";
			else{
				remain[2] -= num;
				cart[2] += num;
			}
		}
		else if(choice == "Raspberry"){
			if(remain[3] < num)
				cout << "The raspberry is not enough\n";
			else{
				remain[3] -= num;
				cart[3] += num;
			}
		}
		else if(choice == "Butterscotch"){
			if(remain[4] < num)	
				cout << "The butterscotch is not enough\n";
			else{	
				remain[4] -= num;
				cart[4] += num;
			}
		}
		else
			cout << "Invalid flavor.\n";
		cout << "Continue choice? (0 to exit, other numbers to continue) : ";
		cin >> option;
		if(option == 0)
			break;
	}
	cout << "The user's cart\n";
	if(cart[0] != 0)
		cout << "Chocolate\t" << cart[0] << endl;
	if(cart[1] != 0)
		cout << "Vanilla\t" << cart[1] << endl;
	if(cart[2] != 0)
		cout << "Strawberry\t" << cart[2] << endl;
	if(cart[3] != 0)
		cout << "Raspberry\t" << cart[3] << endl;
	if(cart[4] != 0)
		cout << "Butterscotch\t" << cart[4] << endl;
	return 0;
}
