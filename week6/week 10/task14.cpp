#include<iostream>
#include<cmath>
using namespace std;
int time_calculations(int minutes,int hours){
    minutes=minutes+15;
    if(minutes>=60){
        minutes=0;
        hours=hours+1;
    }
     if(hours>=24){
        hours=0;
    }
    cout<<"future time is "<<hours<<":"<<minutes;
}
int main(){
    cout<<"enter the hours:";
    int hours;
    cin>>hours;
    cout<<"enter the minutes";
    int minutes;
    cin>>minutes;
    time_calculations(minutes,hours);
}