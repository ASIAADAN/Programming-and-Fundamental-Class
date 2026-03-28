#include<iostream>
using namespace std;
main(){
float area;
    string figure;
    cout<<"enter the figure";
    cin>>figure;
    if(figure=="square"){

        int length;
        cout<<"enter length";
        cin>>length;
area=length*length;
cout<<area;


    }
   if(figure=="rectangle"){
   int length1,length2;
   cout<<"enter two lengths";
   cin>> length1>>length2;
area=length1*length2;
cout<<area;}
if(figure == "circle"){
    int length;
    cout<<"enter the length";
    cin>>length;
    area=3.14*length*length;
    cout<<area;


}
if(figure=="triangle"){
    int a,b;
    cout<<"<enter two num:";
    cin>>a>>b;
    area=1/2*a*b; 
    cout<<area;

}


    
    
}