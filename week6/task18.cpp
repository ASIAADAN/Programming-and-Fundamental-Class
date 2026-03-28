#include<iostream>
using namespace std;
int main(){

int n=5;
string stu[n];
for(int i=0 ;i<5; i++){
cout<<"enter the name of "<<i+1  <<"  student"<<endl;
cin>>stu[i];
}
cout<<"the name of students are  "<<endl;
for(int i=0 ;i<5; i++){
    
    cout<<stu[i]<<endl;
 }

}