#include<iostream>
using namespace std;

int main(){

cout<<"enter working days of month:";
int workingdays;
cin>>workingdays;

cout<<"enter earned doller  per day:";
float earneddoller;
cin>>earneddoller;

cout<<"echange rate of us to rps:";
float exchangerate;
cin>>exchangerate;

float salarypermonth;
salarypermonth=workingdays*earneddoller;

float salaryperyear;
salaryperyear=salarypermonth*12;

float salarywithtext;
salarywithtext=salaryperyear*(25/100);


float totalsalary;
totalsalary=salaryperyear-salarywithtext;

float totalsalaryinrps;
totalsalaryinrps=totalsalary*exchangerate;

cout<<"total salary in rps is "<<totalsalaryinrps<<" ";

}


