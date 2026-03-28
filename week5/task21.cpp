#include<iostream>
using namespace std;
main(){

   

        cout<<"-----------library system---------"<<endl;
        cout<<"1.Add book"<<endl;
        cout<<"2.view  book"<<endl;
        cout<<"3.borrow book"<<endl;
        cout<<"4.issue book"<<endl;
        cout<<"5.exit"<<endl;
        int choice;
        cout<<"enter your choice:";
        cin>>choice;
        
        while(choice<=5){
             string book_name;
                cout<<"enter book name:";
                cin>>book_name;
            if(choice==1){
               
                cout<<"added book is"<<book_name;
            }
            if (choice==2){
                 
                cout<<"view book is"<<book_name;

            }
            if(choice==3){
                 
                cout<<"the book you want to borrow is"<<book_name;
            }
            if(choice==4){
                cout<<"book that is issuing is"<<book_name;
            }
            if(choice==5){
                cout<<"u want to exit";
            }
        }
    }
