#include<iostream>
using namespace std;
int main(){
int n,digit,count;
cout<<"enter number"<<endl;
cout<<"enter digit"<<endl;
cin>>n>>digit;
while(n!=0){
    
int bro;
bro=n%10;
if(bro ==digit){
    cout<<count++;
    



}
n=n/10;


}
cout<<count;




}