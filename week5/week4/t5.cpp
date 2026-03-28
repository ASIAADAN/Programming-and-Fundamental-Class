#include<iostream>
using namespace std;
main(){
    char going;
    cout<<"are your friend going(press Y for yes amd N for no)";
    cin>>going;

    if(going== 'Y'){
        cout<<"yOu are going";
        if (going == 'N'){
            cout<<"you are not going";
        }
    }
}