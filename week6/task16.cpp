#include<iostream>
using namespace std;
int main(){
int n,even=0,t=0;
cout<<"enter the number of elements:";
cin>>n;
int num[n];
for(int i=0 ;i<n ;i++){
cout<<"enter the numbers";
cin>>num[i];
    if(num[i]%2==0){
       
t=t+1;
    }
    

}
cout<<"total even numbers"<<t;
}