#include<iostream>
#include<cmath>
using namespace std;
void value_determining(int num){
    int first_digit=num/100;
    int last_digit=num%10;
if (first_digit==last_digit){
    cout<<"true";
}
else{
    cout<<"false";
}

}
int main(){
    cout<<"enter the  number";
    int num;
    cin>>num;
value_determining(num);
    
}