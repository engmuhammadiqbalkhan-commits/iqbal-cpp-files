#include <iostream>      // Includes input/output stream library
using namespace std;     // Allows use of standard names without std::

/* Function declaration:
   takes two integer parameters and returns nothing */
void multiply(int num1, int num2);

int main() {
    int a, b;   // Variables to store user input numbers

    cout << "Enter two numbers: ";   // Prompt user for input
    cin >> a >> b;                   // Read two integers from user

    multiply(a, b);  // Function call with arguments a and b

    return 0;        // Indicates successful program termination
}

/* Function definition:
   performs multiplication and displays result */
void multiply(int num1, int num2) {
    int product = num1 * num2;   // Multiply the two numbers

    cout << "Product = " << product << endl;  // Display result
}
