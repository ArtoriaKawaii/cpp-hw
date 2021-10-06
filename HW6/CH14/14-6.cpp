#include<iostream>
#include"CashPayment.h"
#include"CreditCardPayment.h"
using std::cout;

int main(){
    CashPayment cash1(50.5);
    cout << "Cash 1 details :\n";
    cash1.paymentDetails();
    CashPayment cash2(20.45);
    cout << "\nCash 2 details :\n";
    cash2.paymentDetails();
    CreditCardPayment card1(10.5, "Fred", "10/5/2010", "123456789");
    cout << "\nCredit 1 details :\n";
    card1.paymentDetails();
    CreditCardPayment card2(100, "Barney", "11/15/2009", "987654321");
    cout << "\nCredit 2 details :\n";
    card2.paymentDetails();
    return 0;
}
