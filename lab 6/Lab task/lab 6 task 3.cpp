#include <iostream>   // Library for input/output
using namespace std;

int main() {

    int n;       // Variable to store user input
    int sum = 0; // Variable to store sum (initially 0)

    cout << "Enter a positive integer: ";
    cin >> n;   // Take input from user

    // Loop from 1 to n
    for(int i = 1; i <= n; i++) {
        sum = sum + i;   // Add current number to sum
    }

    cout << "Sum = " << sum << endl;  // Display result

    return 0;  // End of program
}
