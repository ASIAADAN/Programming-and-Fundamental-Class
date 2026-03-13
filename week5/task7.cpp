#include<iostream>
using namespace std;
main(){
int n1=8;
int n2=13;
int next;
    for(int i=1; i<=10; i++)
   { next=n1+n2;
    cout<<next<<",";
  
    n1=n2;
    n2=next;
   }

}
