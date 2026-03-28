#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a num of element :";
    cin>>n;
    int flight[n],seats[n];
    string detination[n];
    for(int i=0;i<n;i++){
cout<<"enter flight number :";
cin>>flight[i];
cout<<"enter destination :";
cin>>detination[i];
cout<<"enter seats available :";
cin>>seats[i];
    }
    cout<<"flight informatiaon"<<endl;
    for(int i=0;i<n ;i++){
        
cout<<"flight  "<<flight[i]<<"  to  "<<detination[i]<<"  has  "<<seats[i]<<"available"<<endl;  }
     for(int i=0;i<n ;i++){
        cout<<"flight informatiaon"<<endl;
cout<<"flight  "<<flight[i]<<"  to  "<<detination[i]<<"  has  "<<seats[i]<<"available"<<endl<<"seates"<<endl;

    }
}

