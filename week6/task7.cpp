#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter num of elements :";
    cin>>n;
   int num[n];
    for(int i=0 ;i<n; i++){
 
    cout<<"enter number in array:";
    cin>>num[i];
    }
    int largest=num[0];//asuming first digit is largest
for(int i=1;i<n;i++){
    if (num[i]>largest){
        largest=num[i];
       
    }
    
}
 cout<<largest <<"is the largest";
}