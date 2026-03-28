#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num of element: ";
    cin>>n;
    string stu[n];
    for(int i=0; i<n ;i++){
cout<<"enter thr name of student: ";
cin>>stu[i];
    }
    
    for(int i=0; i<n ;i++){
    for(int j=1+i ;j<n;j++){
        if(stu[i]>stu[j]){
            string temp = stu[i];
            stu[i]=stu[j];
            stu[j]=temp;
        }
    }
    cout<<"names in alphabatic order";;




}
 cout<<"names in alphabatic order";
for(int i=0; i<n ;i++){
    cout<<stu[i];
}
}