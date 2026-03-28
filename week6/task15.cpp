#include<iostream>
using namespace std;
int main (){

    int n,t=0;
    cout<<"enter the number of element: ";
    cin>>n;
    int num[n];
    for(int i=0;i <n;i++){
cout<<"enter the numbers:";
cin>>num[i];

t=t+num[i];

    }
   cout<<"sum of all elements is"<<t; 
}