#include<iostream>
using namespace std;
int main(){

    string line;
    cout<<"enetr a line:";
    getline(cin,line);


   for(int i=0;i<line.length();i++) {
   
    if( line[i]=='a' || line[i]=='e' || line[i] =='i' || line[i]=='o' || line[i]== 'u'){
line.erase(i,1);
    }
    
   }
   cout<<line;
   
    
    
}