#include<iostream>
using namespace std;
main(){

cout<<"name:";
string name;
cin>>name;

cout<<"matric number out of 1100:";
int matric;
cin>>matric;

cout<<" intermediate number out of 550:";
int intermediate;
cin>>intermediate;


cout<<"ecat number out of 400:";
int ecat;
cin>>ecat;

float aggregate;
aggregate=(ecat/400.0*50)+(intermediate/550.0*40)+(matric/1100.0*10);
cout<<"aggregate is  "<<aggregate<<" ";

}

