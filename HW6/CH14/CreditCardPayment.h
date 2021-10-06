#ifndef CreditCardPayment_H
#define CreditCardPayment_H
#include<iostream>
#include<string>
#include"Payment.h"
using std::string;
using std::cout;
using std::endl;
class CreditCardPayment : public Payment{
    private:
        string name;
        string expireDate;
        string cardNumber;
    public:
        CreditCardPayment();
        CreditCardPayment(float amount, string name, string expireDate, string cardNumber);
        void paymentDetails();
};

#endif