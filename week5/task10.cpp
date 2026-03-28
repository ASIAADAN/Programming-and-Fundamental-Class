#include<iostream>
using namespace std;
main(){

    int num,rep,digit,count=0;
    cout<<"enter a number";
    cin>>num;
    cout<<"enter a digit";
    cin>>digit;
    while(num!=0){
    rep=num%10;
    if(rep==digit){
    count++;}
    num=num/10;}
    cout<<count;

}