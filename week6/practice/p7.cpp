#include <iostream>
using namespace std;
int main()
{

    int choice;
    while (true)
    {
        cout << "CALCULATOR"<<endl;
        cout << "1.ADDITION"<<endl;
        cout << "2.SUBSTRACTION"<<endl;
        cout << "3.MULTIPLICATION"<<endl;
        cout << "4.DIVISION"<<endl;
        cout << "5.CLEAR SCREEN"<<endl;
        cout << "6.EXIT"<<endl;
        cout << "enter your choice:";
        cin >> choice;
        if (choice == 1)
        {
            int n1, n2, ans;
            cout << "enter first number:"<<endl;
            cin >> n1;
            cout << "enter second numnber:"<<endl;
            cin >> n2;
            ans = n1 + n2;
            cout << "your ans is"<<ans<<endl;
        }
       else if(choice==2){
        int n1, n2, ans;
            cout << "enter first number:"<<endl;
            cin >> n1;
            cout << "enter second numnber:"<<endl;
            cin >> n2;
            ans = n1 - n2;
            cout << "your ans is"<<ans<<endl;
        }
       else if (choice==3){

            int n1, n2, ans;
            cout << "enter first number:"<<endl;
            cin >> n1;
            cout << "enter second numnber:"<<endl;
            cin >> n2;
            ans = n1 * n2;
            cout <<  "your ans is"<<ans<<endl;
        }
        
       
     else if(choice==4){
            int n1, n2, ans;
            cout << "enter first number:"<<endl;
            cin >> n1;
            cout << "enter second numnber:"<<endl;
            cin >> n2;
            ans = n1 / n2;
            cout <<  "your ans is"<<ans<<endl;
        }
       else if (choice==5){
            cout<<"clear";
            
        }
        else if(choice==6){
            cout<<"you exit"<<endl;
break;
        }
        else{
            cout<<"invalid choice";
        }
    }
}
