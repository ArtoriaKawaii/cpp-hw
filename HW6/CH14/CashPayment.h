#ifndef CashPayment_H
#define CashPayment_H
#include<iostream>
#include"Payment.h"
using std::cout;
using std::endl;

class CashPayment : public Payment{
    public:
        CashPayment();
        CashPayment(float amount);
        void paymentDetails();
};

#endif