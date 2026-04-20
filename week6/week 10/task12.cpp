#include<iostream>
#include<cmath>
using namespace std;
int sum=0;
void odd_even(int num){
    //1234
    while(num<0){
        
        int digit=num%10;//4
        sum=sum+num;
        num=num/10;//123  
    }
    
    if (sum%2==0){
        cout<<"sum of digits is even";
    }
    else{
        cout<<"sum of digits is odd";
    }
}
int main(){
    cout<<"enetr a three digit number";
    int num;
    cin>>num;
odd_even(num);
}
