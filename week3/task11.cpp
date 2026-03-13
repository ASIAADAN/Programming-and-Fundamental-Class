#include<iostream>
using namespace std;
main(){
cout<<"enter the number of wins:";
int wins;
cin>>wins;

cout<<"enter the number of draws:";
int draws;
cin>>draws;

cout<<"enter the number of losses:";
int losses;
cin>>losses;

int totalpoints;
totalpoints=(wins*2)+(draws*1)+(losses*0);
cout<<"total points is "<<totalpoints<<" ";

}