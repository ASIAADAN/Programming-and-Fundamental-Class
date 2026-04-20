#include<iostream>
using namespace std;
int main(){
int n=500;
char choice;
for(int i=0;i<n;i++){
    cout<<"enter:";
    cin>>choice;
    if(choice=='n' || choice=='N')
{
    cout<<"end of programme";
    break;
}
else{
    cout<<"enter choice again"<<endl;
}
    
}
}