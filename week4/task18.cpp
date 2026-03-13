#include<iostream>
using namespace std;
main(){
    int temp1,temp2;
    cout<<"enter two tempratures";
    cin>>temp1>>temp2;
    int difference;
    difference=temp2-temp1;
    if(difference>100)
{
    cout<<"differ is too big";
}
else {
    cout<<"programm ends";
}

}