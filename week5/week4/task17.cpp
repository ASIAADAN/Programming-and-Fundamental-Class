#include<iostream>
using namespace std;
main(){

    int speed;
    cout<<"enter the speed :";

cin>>speed;
if(speed<=10){
    cout<<"slow";

}
else if(speed>10 && speed<=50){
    cout<<"average";

}
else if(speed>50 && speed<=100){
    cout<<"fast";
}
}