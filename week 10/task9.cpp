#include<iostream>
#include<cmath>
using namespace std;
    void alphabet_determination(char ch){
    if(ch>='A' && ch<='Z'){
        cout<<"you entered te capital letter "<<ch<<endl;
    }
    else{
        cout<<"your entered small letter";
    }
}
int main(){
    cout<<"enter the letter from a to z";
    char ch;
    cin>>ch;
    alphabet_determination(ch);
}