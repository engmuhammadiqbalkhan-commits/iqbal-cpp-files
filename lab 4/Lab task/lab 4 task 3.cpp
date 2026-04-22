#include <iostream>
using namespace std;

int main() {

    int choice;     // user ka option
    float value;    // input value

    // menu display kar rahe hain
    cout << "1: Km to M\n";
    cout << "2: M to Cm\n";
    cout << "3: Kg to G\n";
    cout << "4: C to F\n";

    cout << "Enter your choice: ";
    cin >> choice;  // user se choice lena

    cout << "Enter value: ";
    cin >> value;   // conversion ke liye value lena

    // switch ke through conversion select karna
    switch(choice) {

        case 1:
            cout << "Meters = " << value * 1000;  // km ? m
            break;

        case 2:
            cout << "Centimeters = " << value * 100;  // m ? cm
            break;

        case 3:
            cout << "Grams = " << value * 1000;  // kg ? g
            break;

        case 4:
            cout << "Fahrenheit = " << (value * 9/5) + 32;  // C ? F
            break;

        default:
            cout << "Invalid choice";  // wrong option
    }

    return 0;
}
