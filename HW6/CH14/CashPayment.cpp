#include"CashPayment.h"

CashPayment::CashPayment():Payment(){}
CashPayment::CashPayment(float amount):Payment(amount){}
void CashPayment::paymentDetails(){
    cout << "The cash payment amount is " << amount << endl;
}