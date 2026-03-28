#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter the number of product:";
cin>>n;
int price[n],quantity[n];
string name[n];
for(int i=0 ;i<n ;i++){


    cout<<"enter the name of product :";
    cin>>name[i];
    cout<<"enter the price of product  :";
   cin >>price[i];
    cout<<"enter the quantity of product  :;";
    cin>>quantity[i];

}
for(int i=0 ;i<n ;i++){

int total=price[i]*quantity[i];
cout<<name[i]<<"   "<<price[i]<<"   "<<quantity[i]<<endl;
cout<<total;
}





}