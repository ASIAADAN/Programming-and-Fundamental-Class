#include<iostream>
#include<cmath>
using namespace std;
void solve_quardratic(double a,double b,double c){
    double discriminent=(b*b)-(4*a*b);
    if(discriminent>0){
        double root_1=(-b+sqrt(discriminent)/(2*a));
        double root_2=(-b-sqrt(discriminent)/(2*a));
        cout<<"solotion:x="<<root_1<<"x="<<root_2<<endl;

    }
    else if(discriminent=0){
        double root=-b/(2*a);
        cout<<"solution:x="<<root<<endl;

    }
    else{
        double real_part=-b/(2*a);
        double imginary_part=sqrt(-discriminent)/(2*a);
        cout<<"complex solution:="<<real_part<<" + "<<imginary_part<<endl;
    }
}
int main(){
    cout<<"enter a";
    double a;
    cin>>a;
    cout<<"enter b";
    double b;
    cin>>b;
    cout<<"enter c";
    double c;
    cin>>c;
    solve_quardratic(a,b,c);

}