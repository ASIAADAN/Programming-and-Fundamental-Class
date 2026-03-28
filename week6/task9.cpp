#include<iostream>
using namespace std;
int main(){
    float change[4];
    
        cout<<"quater:";
        cin>>change[0];
        cout<<"dyim:";
        cin>>change[1];
        cout<<"nickel:";
        cin>>change[2];
        cout<<"penny:";
        cin>>change[3];
float total,dues;
cout<<"enter amiunt of dues:";
cin>>dues;
total=(change[0]*0.25)+(change[1]*0.10)+(change[2]*0.05)+(change[3]+0.01);
cout<<total;
if( total>=dues){
    cout<<"yes i can pay bill";
}
else{
    cout<<"i canot pay bill bro plx i am too poor";
}
    }
