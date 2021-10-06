#include"Payment.h"

Payment::Payment(){}
Payment::Payment(float amount){
    this->amount = amount;
}
void Payment::paymentDetails(){
    cout << "The payment amount is " << amount << endl;
}