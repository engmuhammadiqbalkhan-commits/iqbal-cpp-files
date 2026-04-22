#include <iostream>
using namespace std;

int main() {

    float celsius, fahrenheit;  // variables declare

    // user se temperature lena
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // formula apply karna
    fahrenheit = (celsius * 9/5) + 32;

    // result show karna
    cout << "Temperature in Fahrenheit = " << fahrenheit << endl;

    return 0;
}
