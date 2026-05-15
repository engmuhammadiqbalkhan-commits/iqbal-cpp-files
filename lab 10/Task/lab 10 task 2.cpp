#include <iostream>      // Includes input/output library
using namespace std;     // Standard namespace

/* Function declaration:
   takes one integer and returns an integer */
int getSquare(int number);

int main() {
    int num;   // Variable to store user input

    cout << "Enter a number: ";   // Ask user for input
    cin >> num;                   // Read number from user

    int result = getSquare(num);  // Call function and store returned value

    cout << "Square = " << result << endl;  // Display result

    return 0;     // End of program
}

/* Function definition:
   calculates square and returns it */
int getSquare(int number) {
    int square = number * number;   // Compute square

    return square;   // Return result to main function
}
