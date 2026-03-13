#include<iostream>
using namespace std;
main(){

    float amount;
    cout<<"enter the amount";
    cin>> amount;

    if(amount >= 5000){
    amount=amount*(50.0/100.0);
    cout<<"discounted amount will be"<< amount;
}
    if( amount<5000){
        amount=amount*(10.0/100.0);
        cout<<"discounted amount will be"<< amount;

    }
}
