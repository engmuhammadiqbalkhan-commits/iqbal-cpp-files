#include <iostream>   // Library for input/output
using namespace std;

int main() {

    int rows;  // Variable to store number of rows

    cout << "Enter number of rows: ";
    cin >> rows;  // Take input from user

    // Outer loop controls number of rows
    for(int i = 1; i <= rows; i++) {

        // Inner loop prints stars in each row
        for(int j = 1; j <= i; j++) {
            cout << "* ";   // Print star with space
        }

        cout << endl;  // Move to next line after each row
    }

    return 0;  // End of program
}
