#include<iostream>
using namespace std;
main(){
int num,sum=0;
cout<<"enter a num:";
cin>>num;
    while(num!=0){
    sum=sum+(num%10);
    num=num/10;

    }
cout<<sum;
}

