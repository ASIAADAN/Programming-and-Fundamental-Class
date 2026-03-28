#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number for array:";
    cin>>n;
    int num[n];

    int extra;
    cout<<"enter a random number by user";
    cin>>extra;
    for(int i=0;i<=n ; i++){
        cout<<"enter numbers in array:";
    cin>>num[n];

    }
    if(   num[n]==extra ){
    cout<<extra <<"is present in array";
    
    }
    else{
        cout<<"not present";
    }
    
}
    