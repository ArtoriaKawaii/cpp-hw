#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

class Money{
	public:
		Money();
		Money(double amount);
		Money(int theDollars, int theCents);
		Money(int theDollars);
		double getAmount() const;
		int getDollars() const;
		int getCents() const;
		const Money percent(int percentFigure) const;
		friend const Money operator +(const Money& amount1, const Money& amount2);
		friend const Money operator -(const Money& amount1, const Money& amount2);
		friend bool operator ==(const Money& amount1, const Money& amount2);
		friend bool operator <(const Money& amount1, const Money& amount2);
		friend bool operator <=(const Money& amount1, const Money& amount2);
		friend bool operator >(const Money& amount1, const Money& amount2);
		friend bool operator >=(const Money& amount1, const Money& amount2);
		friend const Money operator -(const Money& amount);
		friend ostream& operator <<(ostream& outputStream, const Money& amount);
		friend istream& operator >>(istream& inputStream, Money& amount);
/*		Return a copy of the stream object is not allow,
		since the copy constructor of all stream classes in C++ is disabled by making them private.
		Copying stream is disabled because it doesn't make sense.
		Stream is not a container that you can make copy of, it doesn't contain data, it is through which you get data.*/
	private:
		int dollars, cents;
		int dollarsPart(double amount) const;
		int centsPart(double amount) const;
		int round(double number) const;
};

int main(){
	Money yourAmount, myAmount(10, 9);
	cout << "Enter an amount of money: ";
	cin >> yourAmount;
	cout << "Enter a percent you wish to take of your amount: ";
	int yourPercent;
	cin >> yourPercent;
	cout << "Your amount is " << yourAmount << endl;
	cout << "My amount is " << myAmount << endl;
	cout << yourPercent << "\% of your amount is " << yourAmount.percent(yourPercent) << endl;
	cout << "15\% of my amount is " << myAmount.percent(15) << endl;
	if(yourAmount == myAmount)
		cout << "We have the same amount of money.\n";
	else
		cout << "One of us is richer.\n";
	Money sumAmount = yourAmount + myAmount;
	Money diffAmount = yourAmount - myAmount;
	cout << yourAmount << " + " << myAmount << " equals " << sumAmount << endl;
	cout << yourAmount << " - " << myAmount << " equals " << diffAmount << endl;
	cout << "Your amount is " << yourAmount << endl;
	cout << "My amount is " << myAmount << endl;
	if(yourAmount >= myAmount)
		cout << "Your amount is greater than or equal to my amount.\n";
	else
		cout << "Your amount is less than my amount.\n";
	if(sumAmount > diffAmount)
		cout << "The sum of our amounts is greater than the difference.\n";
	else
		cout << "The sum of our amounts is less than or equal to the difference.\n";
	if(yourAmount <= myAmount)
		cout << "Your amount is less than or equal to my amount.\n";
	else
		cout << "Your amount is greater than my amount.\n";
	if(sumAmount < diffAmount)
		cout << "The sum of our amounts is less than the difference.\n";
	else
		cout << "The sum of our amounts is greater than or equal to the difference.\n";
	return 0;
}
const Money operator +(const Money& amount1, const Money& amount2){
	int allCents1 = amount1.cents + amount1.dollars * 100;
	int allCents2 = amount2.cents + amount2.dollars * 100;
	int sumAllCents = allCents1 + allCents2;
	int absAllCents = abs(sumAllCents);
	int finalDollars = absAllCents / 100;
	int finalCents = absAllCents % 100;
	if(sumAllCents < 0){
		finalDollars = -finalDollars;
		finalCents = -finalCents;
	}
	return Money(finalDollars, finalCents);
}

const Money operator -(const Money& amount1, const Money& amount2){
	int allCents1 = amount1.cents + amount1.dollars * 100;
	int allCents2 = amount2.cents + amount2.dollars * 100;
	int diffAllCents = allCents1 - allCents2;
	int absAllCents = abs(diffAllCents);
	int finalDollars = absAllCents / 100;
	int finalCents = absAllCents % 100;
	if(diffAllCents < 0){
		finalDollars = -finalDollars;
		finalCents = -finalCents;
	}
	return Money(finalDollars, finalCents);
}

bool operator ==(const Money& amount1, const Money& amount2){
	return ((amount1.dollars == amount2.dollars) && (amount1.cents == amount2.cents));
}

bool operator <(const Money& amount1, const Money& amount2){
	return ((amount1.dollars * 100 + amount1.cents) < (amount2.dollars * 100 + amount2.cents));
}

bool operator <=(const Money& amount1, const Money& amount2){
	return ((amount1.dollars * 100 + amount1.cents) <= (amount2.dollars * 100 + amount2.cents));
}

bool operator >(const Money& amount1, const Money& amount2){
	return ((amount1.dollars * 100 + amount1.cents) > (amount2.dollars * 100 + amount2.cents));
}

bool operator >=(const Money& amount1, const Money& amount2){
	return ((amount1.dollars * 100 + amount1.cents) >= (amount2.dollars * 100 + amount2.cents));
}

const Money operator -(const Money& amount){
	return Money(-amount.dollars, -amount.cents);
}

ostream& operator <<(ostream& outputStream, const Money& amount){
	int absDollars = abs(amount.dollars);
	int absCents = abs(amount.cents);
	if(amount.dollars < 0 || amount.cents < 0)
		outputStream << "$-";
	else
		outputStream << "$";
	outputStream << absDollars;
	if(absCents >= 10)
		outputStream << "." << absCents;
	else
		outputStream << ".0" << absCents;
	return outputStream;
}
istream& operator >>(istream& inputStream, Money& amount){
	char dollarSign;
	inputStream >> dollarSign;
	if(dollarSign != '$'){
		cout << "No dollar sign in Money input.\n";
		exit(1);
	}
	double amountAsDouble;
	inputStream >> amountAsDouble;
	amount.dollars = amount.dollarsPart(amountAsDouble);
	amount.cents = amount.centsPart(amountAsDouble);
	return inputStream;
}

Money::Money() : dollars(0), cents(0){
}

Money::Money(double amount) : dollars(dollarsPart(amount)), cents(centsPart(amount)){
}

Money::Money(int theDollars) : dollars(theDollars), cents(0){
}

Money::Money(int theDollars, int theCents){
	if((theDollars > 0 && theCents < 0) || (theDollars < 0 && theCents > 0)){
		cout << "Inconsistent money data.\n";
		exit(1);
	}
	dollars = theDollars;
	cents = theCents;
}

double Money::getAmount() const{
	return (dollars + cents * 0.01);
}

int Money::getDollars() const{
	return dollars;
}

int Money::getCents() const{
	return cents;
}

const Money Money::percent(int percentFigure) const{
	double result = (dollars + cents * 0.01) * percentFigure / 100.0;
	return Money(dollarsPart(result), centsPart(result));
}

int Money::dollarsPart(double amount) const{
	return static_cast<int>(amount);
}

int Money::centsPart(double amount) const{
	double doubleCents = amount * 100;
	int intCents = (round(fabs(doubleCents))) % 100;
	if(amount < 0)
		intCents = -intCents;
	return intCents;
}

int Money::round(double number) const{
	return static_cast<int>(floor(number + 0.5));
}
