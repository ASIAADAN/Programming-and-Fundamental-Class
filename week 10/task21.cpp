#include <iostream>
using namespace std;

float calculateSalary(float base, int score, int experience) {
    float bonusPercentage = 0;

    if (score >= 90) {
        bonusPercentage = 20;
    } else if (score >= 75) {
        bonusPercentage = 10;
    } else {
        bonusPercentage = 5;
    }

    if (experience >= 5) {
        bonusPercentage = bonusPercentage + 5;
    }

    float totalBonus = base * (bonusPercentage / 100);
    return base + totalBonus;
}

int main() {
    float base;
    int score, exp;
    
    cout << "Enter base, score and experience: ";
    cin >> base >> score >> exp;
    
    cout << "Final Salary: " << calculateSalary(base, score, exp) << endl;
    
    return 0;
}