#include"CreditCardPayment.h"

CreditCardPayment::CreditCardPayment():Payment(){}
CreditCardPayment::CreditCardPayment(float amount, string name, string expireDate, string cardNumber):Payment(amount){
    this->name = name;
    this->expireDate = expireDate;
    this->cardNumber = cardNumber;
}
void CreditCardPayment::paymentDetails(){
    cout << "The credit payment amount is " << amount << endl;
    cout << "The name on the credit card is " << name << endl;
    cout << "The expiration date is " << expireDate << endl;
    cout << "The credit card number is " << cardNumber << endl;
}