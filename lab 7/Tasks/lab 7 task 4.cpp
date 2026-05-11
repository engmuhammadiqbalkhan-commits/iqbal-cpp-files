#include <iostream>   // Input-output library
using namespace std;  // Standard namespace

int main() {  // Program start

    // Integer array declare
    int numbers[5];

    // Sum store karne ke liye variable
    int sum = 0;

    // User se 5 numbers input lene ke liye loop
    cout << "Enter 5 numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];  // Input store
    }

    // Array ke elements ka sum calculate karna
    for (int i = 0; i < 5; i++) {
        sum = sum + numbers[i];  // Add each element
    }

    // Final result display
    cout << "Sum of numbers = " << sum << endl;

    return 0;  // Program end
}
