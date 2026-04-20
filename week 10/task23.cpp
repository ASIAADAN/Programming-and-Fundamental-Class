#include <iostream>
using namespace std;

float calculateBalance(float balance, int years) {
    float interestRate = 0;

    if (balance < 10000) {
        interestRate = 5;
    } else if (balance >= 10000 && balance <= 50000) {
        interestRate = 7;
    } else if (balance > 50000) {
        interestRate = 10;
    }

    if (years >= 3) {
        interestRate = interestRate + 2;
    }

    float interestAmount = balance * (interestRate / 100);
    return balance + interestAmount;
}

int main() {
    float balance;
    int years;

    cout << "Enter Balance and years: " << endl;
    cin >> balance >> years;

    cout << "Updated Balance: " << calculateBalance(balance, years) << endl;

    return 0;
}