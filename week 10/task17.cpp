#include <iostream>
#include <string>
using namespace std;

string calculatePoolState(double V, double P1, double P2, double H) {
    double totalWater = (P1 + P2) * H;

    if (totalWater <= V) {
        // Pool ke andar hai
        double percent = (totalWater / V) * 100;
        return "The pool is " + to_string((int)percent) + "% full.";
    } else {
        // Overflow ho gaya
        double overflow = totalWater - V;
        return "For " + to_string(H) + " hours the pool overflows with " + to_string(overflow) + " liters.";
    }
}

int main() {
    // Example test
    cout << calculatePoolState(1000, 100, 120, 3); // V=1000, P1=100, P2=120, H=3
    return 0;
}