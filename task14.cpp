#include<iostream>

using namespace std;
main(){

    int num=5,number;
    float p1=0,p2=0,p3=0,p4=0 ,p5=0;
    
    
    for(int i=0;i<=num;i++){
        cin>>number;
    if(number<200)p1++  ;
    else if (number<400)p2++  ;
    else if(number<600)p3++  ;
    else if(number<800)p4++  ;
    else p5++;

    }
    
cout<<(p1/num)*100<<"%";
cout<<(p2/num)*100<<"%";
cout<<(p3/num)*100<<"%";
cout<<(p4/num)*100<<"%";
cout<<(p5/num)*100<<"%";
}
