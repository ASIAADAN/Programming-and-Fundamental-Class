#include<iostream>
using namespace std;
main(){

int age=18;

int year,money,total;
cin>>year >>money;
for(int i=1800 ; i>=1800; i++){
if(year%2==0){
     total = 1200;
}
else {
     total=1200+50*age;
}
age++;
}

if(money>=total){
    cout<<"yes"<<money-total;
}
if(money<total){
    cout<<"no"<<total-money;
}
}
