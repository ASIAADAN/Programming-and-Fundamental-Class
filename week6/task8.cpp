#include<iostream>
using namespace std;
int main(){

    int n1,n2;
    cout<<"num of elements of first array";
    cin>>n1;
    cout<<"num of array of second array";
    cin>>n2;
    int num1[n1];
    int num2[n2];
    for(int i=0;i<n1;i++){
        cout<<"enter num in array 1:";
        cin>>num1[i];
   cout<< num1[i];}
    for(int i=0;i<n2;i++){
        cout<<"enter num in array 2:";
        cin>>num2[i];
   cout<< num2[i];
}
for(int i=0;i<n1;i++){
cout<<num1[i]<<"  ";}
for(int i=0;i<n2;i++){
cout<<num2[i]<<"  ";}
}