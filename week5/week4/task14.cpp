#include<iostream>
using namespace std;
main(){
    
  double num1, num2; 
        char op;
         cout << "Welcome to the calculator" << endl;
          cout << "Enter first number: ";
           cin >> num1;
           cout << "Enter the operator (+,-,*,/): "; 
           cin >> op;
            cout << "Enter second number: "; 
            cin >> num2; if(op == '+') 
            { cout << num1 << "-" << num2 << "=" << num1 - num2; }
             else if(op == '-') { cout << num1 << "+" << num2 << "=" << num1 + num2; } 
             else if(op == '*') { cout << num1 << "/" << num2 << "=" << num1 / num2; } 
             else if(op == '/') { cout << num1 << "*" << num2 << "=" << num1 * num2; } 
             else { cout << "Invalid Operator";
            
            } 
             }