#include<iostream>
using namespace std;
int main(){

    int n,largest=0,smallest=0;

    cout<<"enter the num of elements:";
    cin>>n;
    int num[n];
    for(int i=0; i<n ; i++){

        cout<<"enter the numbers";
        cin>>num[i];
        //suppose num[0] is the largest
        largest=num[0];
        //assume num[0] is the smallest
        smallest=num[0];
        
        if (num[i]>largest){
        largest =num[i];
    
        
    }
    if(num[i]<smallest){
        smallest=num[i];

    }
    }
    cout<<largest<<"is the largest"<<endl;
    cout<<smallest<<"is the smaller";
}