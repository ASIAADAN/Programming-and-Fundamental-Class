#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    
    int n;
    cout<<"enter the number of element:";
    cin>>n;
    vector<string> num(n);
    

    for(int i=0 ;i<n;i++){
cout<<"enter the numbers of array"<<endl;
cin>>num[i];

    }
for(int i=0 ;i<n;i++){
    if(num[i].back()!='7'){
        num[i]=num[i]+'7';
    }
    cout<<num[i]<<endl;

}




}

