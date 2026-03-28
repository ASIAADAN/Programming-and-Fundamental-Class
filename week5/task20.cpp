#include<iostream>
using namespace std;
main(){
    int choice;
    
cout<<"_____******____CALCULATOR____*****_____";
cout<<"Addition"<<endl;
cout<<"susbtraction"<<endl;
cout<<"multiplication"<<endl;
cout<<"division"<<endl;
cout<<"enter choice";
cin>>choice;
cout<<"enter two digits";
int n1,n2;
cin>>n1>>n2;
 while(choice<=5){

if(choice==1){
    cout<<n1+n2;
    break;
}
if (choice==2){
    cout<<n1-n2;
break;
}
if (choice==3){
    cout<<n1*n2;
    break;
}
if (choice==4){
    cout<<n1/n2;
    break;
}
else if (choice>=5){
    cout<<"programm ends";
}
 }

}