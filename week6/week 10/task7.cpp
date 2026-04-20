#include<iostream>
#include <cmath>

using namespace std;
float height(float base,float angle){
  float radian=57.2958;
    angle=angle*radian;
    cout<<angle*base;
}
int main(){
   
    int base,angle;
    cout<<"lenght of base";
    cin>>base;
    cout<<"angle of tree from base";
    cin>>angle;
    cout<<height(base,angle);
    return 0;


}

