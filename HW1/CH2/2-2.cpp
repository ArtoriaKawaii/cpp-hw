#include<iostream>
using namespace std;

int main(){
	double deposit, rate, fixedWithdrawn, interest, principal;
	int months;
	cout.setf(ios :: fixed);
	cout.setf(ios :: showpoint);
	cout << "Deposit: ";
	cin >> deposit;
	cout << "Interest Rate: ";
	cin >> rate;
	cout << "Fixed amount withdrawn every month: ";
	cin >> fixedWithdrawn;
	if((deposit - fixedWithdrawn) * rate >= fixedWithdrawn)
		cout << "It's inexhaustible.\n";
	else{
		cout << "Months\tInterest\tPrincipal\n";
		cout.precision(2);
		for(months = 1, principal = deposit; principal >= fixedWithdrawn; months++){
			cout << months << "\t" << (principal - fixedWithdrawn) * rate << "\t\t" 
				 << (principal - fixedWithdrawn) * (rate + 1) << endl;
			principal = (principal - fixedWithdrawn) * (rate + 1);
		}
		cout << "Number of payments: " << months << " Last month interest: " << principal * rate
			 << " Last payment: " << principal * (rate + 1) << endl;
	}
	return 0;
}
