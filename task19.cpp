#include<iostream>
using namespace std;
main(){
int choice;
    while(choice<=6){
        cout<<"=======MAIN MENUE======="<<endl;
        cout<<"1.Welcom to resturent"<<endl;
        cout<<"2.Good bye"<<endl;
        cout<<"3.enter your choice"<<endl;
        cin>>choice;

        if(choice==1)
    {
        cout<<"you selected: view main menue"; 
break;

    }
    if (choice==2)
{
    cout<<"place order";
    break;
}
if (choice==3){
    cout<<"you selected : view order status";
    break;
}
    
    if (choice ==4){
        cout<<"generate bill";
        break;
    }
    if (choice==5){
        cout<<"you selected contact staff";
        break;
    }
    if (choice==6){
        cout<<"exiting the manue";
break;
    }
    {

    }
}
}