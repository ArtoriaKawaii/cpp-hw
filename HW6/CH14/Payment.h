#ifndef Payment_H
#define Payment_H
#include<iostream>
using std::cout;
using std::endl;
class Payment{
    protected:
        float amount;
    public:
        Payment();
        Payment(float amount);
        void paymentDetails();
};

#endif