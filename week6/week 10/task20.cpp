#include <iostream>
#include <string>
#include <cmath> // floor() function ke liye

using namespace std;

string projectTimeCalculation(int neededHours, int days, int workers) {
    // 1. Training days nikal kar baqi din calculate karein (10% training)
    double actualWorkingDays = days - (days * 0.10);
    
    // 2. Total hours calculate karein (8 normal + 2 overtime = 10 hours per worker)
    double totalAvailableHours = actualWorkingDays * 10 * workers;
    
    // 3. Hours ko round down karein
    int finalHours = floor(totalAvailableHours);

    // 4. Check karein ke time kafi hai ya nahi
    if (finalHours >= neededHours) {
        int left = finalHours - neededHours;
        return "Yes!" + to_string(left) + " hours left.";
    } else {
        int needed = neededHours - finalHours;
        return "Not enough time!" + to_string(needed) + " hours needed.";
    }
}

int main() {
    int needed, days, workers;
    
    cout << "Enter needed hours: ";
    cin >> needed;
    cout << "Enter days: ";
    cin >> days;
    cout << "Enter workers: ";
    cin >> workers;

    cout << projectTimeCalculation(needed, days, workers) << endl;

    return 0;
}