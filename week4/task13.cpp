#include<iostream>
using namespace std;
main() {


     int salarypermonth;
     salarypermonth=10000;
     int amountoflaptop;
     amountoflaptop = 50000;
     int advancsalary;
     advancsalary= (10000*50/100)*6;
     int remaningamiunt;
          remaningamiunt =amountoflaptop-advancsalary;
           int monthsrequire;
          monthsrequire=remaningamiunt/salarypermonth;
     if(advancsalary>=50000){
         
          cout<<"Ali can buy laptop";


     }
     else{
         
          cout<<monthsrequire;
     }
}
     



    

}
