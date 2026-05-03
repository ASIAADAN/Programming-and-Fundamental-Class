#include<iostream>
using namespace std;
void myFunction(int *ptrA,int *ptrB){
     
   

int temp=*ptrA;
*ptrA=*ptrB;
*ptrB=temp;

}

int main(){
    int a=20;
    int b=10;
    cout<<a<<endl;
cout<<b<<endl;
   void myFunction(&a,&b); 
}
