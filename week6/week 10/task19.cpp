#include <iostream>
#include <string>
using namespace std;

// Function jo final price calculate karega
float taxCalculator(char type, float price) {
    float taxRate = 0;

    // Vehicle code ke mutabiq tax rate set karein
    if (type == 'M') taxRate = 6;
    else if (type == 'E') taxRate = 8;
    else if (type == 'S') taxRate = 10;
    else if (type == 'V') taxRate = 12;
    else if (type == 'T') taxRate = 15;

    // Formula apply karein
    float taxAmount = price * (taxRate / 100);
    float finalPrice = price + taxAmount;

    return finalPrice;
}

int main() {
    char type;
    float price;

    cout << "Enter vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout << "Enter vehicle price: ";
    cin >> price;

    // Final price calculate karein
    float result = taxCalculator(type, price);

    // Vehicle ka naam nikalne ke liye logic (optional)
    string vehicleName;
    if (type == 'M') vehicleName = "Motorcycle";
    else if (type == 'E') vehicleName = "Electric";
    else if (type == 'S') vehicleName = "Sedan";
    else if (type == 'V') vehicleName = "Van";
    else if (type == 'T') vehicleName = "Truck";

    // Required format mein print karein
    cout << "The final price on a vehicle of type " << vehicleName 
         << " after adding the tax is $" << result << "." << endl;

    return 0;
}