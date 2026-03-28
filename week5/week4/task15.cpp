#include<iostream>
using namespace std;
main(){

    int num;
    cout<<"enter a number:";
    cin>> num;
    string ones[]= {"zero", "one", "two","three","four","five","six","seven","eight","nine"};
    string teens[]={ "ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixeen ","seventeen","eighteen","ninteen"};
string tens[]= {"", "ten", "twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};


if(num>=0 && num<=9){
    cout<< ones[num] ;

}
if(num>=10 && num<=19) {
       cout<<teens[num-10];


}
if(num>=20 && num<=99)
cout<< tens[num/10];
cout<< tens[num%10];
}