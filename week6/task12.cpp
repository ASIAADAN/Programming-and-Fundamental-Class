#include<iostream>
using namespace std;
int main(){
  
int n;
cout<<"enter the number of element:";
cin>>n;
int num[n];
for(int i=0;i <n; i++){
    
    cin>>num[i];}
    bool speacial = true;

for(int i=0;i <n; i++){
    if (i%2==0 && num[i]%2!=0){
        
            speacial=false; }
            break;
            if(i%2==1 && num[i]%2!=0){

            speacial=true;
        }
}

if(speacial){
    cout<<"array is speacial";
}
else {
    cout<<"array is not speacil";

    
}}



