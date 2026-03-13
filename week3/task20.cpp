#include<iostream>
using namespace std;
main(){


cout<<"number of square meter i can paint:";
int n;
cin>>n;

cout<<" length of wall:";
int b;
cin>>b;

cout<<"width of wall:";
int c;
cin>> c;

int area;
area=b*c;

int t;
t=n/area;
cout<<"number of walls i can paint:"<<t<<" ";

}