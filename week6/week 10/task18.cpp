#include <iostream>
#include <string>
#include <iomanip> // Decimal points set karne ke liye

using namespace std;

string pyramidVolume(double length, double width, double height, string unit) {
    // 1. Pehle meters mein volume nikalain
    double volume = (length * width * height) / 3.0;

    // 2. Unit ke mutabiq convert karain
    if (unit == "millimeters") {
        volume = volume * 1000000000.0;
    } 
    else if (unit == "centimeters") {
        volume = volume * 1000000.0;
    } 
    else if (unit == "kilometers") {
        volume = volume / 1000000000.0;
    }
    // Agar unit "meters" hai to change karne ki zaroorat nahi

    // 3. Result ko string format mein return karain
    // "fixed" aur "setprecision" se decimal points control hotay hain
    return to_string(volume) + " cubic " + unit;
}

int main() {
    double l, w, h;
    string unit;

    cout << "Enter length, width, height (in meters): " << endl;
    cin >> l >> w >> h;

    cout << "Enter output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;

    cout << pyramidVolume(l, w, h, unit) << endl;

    return 0;
}