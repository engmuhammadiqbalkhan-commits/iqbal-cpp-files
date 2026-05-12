#include <iostream>      // Includes input/output library
using namespace std;     // Allows use of standard names without std::

// Function declaration (prototype)
void greet();

int main() {
    greet();             // Calling the greet function
    return 0;            // Program ends successfully
}

// Function definition
void greet() {
    // Prints greeting message
    cout << "Welcome to C++ Programming! Have a great day!" << endl;
}
