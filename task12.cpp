#include<iostream>
using namespace std;
main(){

    int a,b,gcd,lcm;
    cout<<"enter num 1:";
    cin>>a;
    cout<<"enter num 2:";
    cin>>b;
for(int i=1;i<=a && i<=b;i++){
    if(a%i==0 && b%i==0)
    gcd=i;
}

lcm=(a*b)/gcd;
cout<<gcd<<endl;
cout<<lcm;
}

