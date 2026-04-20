#include <iostream>
#include <string>
using namespace std;

string convertToText(int num) {
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num < 10) return ones[num];
    else if (num < 20) return teens[num - 10];
    else {
        // Example: 25 -> Twenty + Five
        return tens[num / 10] + ones[num % 10];
    }
}

int main() {
    int n;
    cout << "Enter a number (1-99): ";
    cin >> n;
    cout << convertToText(n) << endl;
    return 0;
}