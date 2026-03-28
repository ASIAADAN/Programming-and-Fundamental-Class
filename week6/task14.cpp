#include<iostream>
using namespace std;
int main(){
    int correct_pin=1234;
    int balance=1000;
    int choice,login;
int pin[3];


for(int i=0;i<3 ;i++){
cout<<"enter the pin:";
cin>>pin[i];
if(pin[i]==correct_pin){
    login=true;
    cout<<"u have login";
    break;}

    else{
    cout<<"please try again"<<endl;
    

    
     
}
break;
}
if(login==true){
    cout<<"you have login"<<endl;
    cout<<"1... Check Balance"<<endl<<
"2... Deposit Money"<<endl<<
"3... Withdraw Money"<<endl<<
"4... Exit"<<endl;
cin>>choice;
}

if (choice==1){
    cout<<"  current balance is="<<balance;
}
else if (choice==2){
    cout<<"enter amount u want to deposite"<<endl;
    int amount;
    cin>>amount;
    cout<<"now you have "<<amount+balance<<" amount in your account";
}
else if (choice=3){
    cout<<"enter the amount which u  want to withdraw"<<endl;
    int withdraw,remaining;
    cin>>withdraw;
    remaining=withdraw-balance;
    if(withdraw<1000){
    cout<<"the remaining amount u have left is"<<remaining;
    }
    if(withdraw>1000){

    cout<<"sorry u r short of money";
    }
    
}

}
