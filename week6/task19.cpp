#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the num of elements";
    cin>>n;
    string cus[n];
    for (int i=0; i<n ;i++){
        cout<<"enter the name of coustemers";
        cin>>cus[i];
    }
    char letter;
    cout<<"enter the latter from which u want to find name of coustumers";
    cin>>letter;
    for(int i=0; i<n ;i++){
        if(cus[i][0]==letter)
        cout<<cus[i]<<endl;
    }
}