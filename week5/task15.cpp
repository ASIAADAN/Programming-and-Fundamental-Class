#include<iostream>
using namespace std;
main(){

    int age,price,toy_price;
     int gift,money,toys;
    cin>>age>>price>>toy_price;
    for(int i=1 ; i<=age ;i++){

       
        if(age%2==0){
            gift+=10;
            money=gift-1;}
            else {
                toys++;
            }
            }
int total=money*(toys*toy_price);
if (total>=price){
    cout<<"yes"<<total-price;
}
else{
    cout<<"no"<<price-total;
}    
  }
    
