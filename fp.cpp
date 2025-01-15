#include <iostream>
#include <string> // Include string library
using namespace std;

float finalBill(float);
void printBill(const string&, float, float, float, float);

int main(){
    string name;
    float unt, min = 50, subCharge, finalCharges, billOut;

    cout << "Enter your name: ";
    getline(cin, name); // Use getline to handle full names with spaces

    cout << "Enter units consumed: ";
    cin >> unt;

    if (unt <= 100) {
        finalCharges = 0.6 * unt + min;
        billOut = finalBill(finalCharges);
    } else if (unt > 100 && unt <= 200) {
        finalCharges = 0.8 * unt + min;
        billOut = finalBill(finalCharges);
    } else if (unt > 200) {
        finalCharges = 0.9 * unt + min;
        billOut = finalBill(finalCharges);
    } else {
        cout << "Invalid Input";
        return 1; // Exit if input is invalid
    }

    printBill(name, unt, min, finalCharges, billOut);

    return 0;
}

float finalBill(float finalCharges) {
    if (finalCharges > 300) {
        return finalCharges + finalCharges * 0.15;
    } else {
        return finalCharges;
        
    }
}

void printBill(const string& name, float unt, float min, float finalCharges, float billOut) {
    if (unt > 0) {
        cout << "Dear " << name << "," << endl;
        cout << "Your finalised bill is:" << endl;
        cout << "Units Consumed: " << unt << endl;
        cout << "Minimum Charges: " << min << endl;
        if (finalCharges > 300) {
            cout << "Additional Subcharge 15%: " << finalCharges * 0.15 << endl;
        }
        cout << "Total Amount: " << billOut << endl;
    } else {
        cout << "Invalid Input Cant Proceed";
    }
}
