#include <iostream>   // Input-output library
using namespace std;  // Standard namespace

int main() {  // Main function start

    // Source array initialize kiya
    int source[5] = {1, 2, 3, 4, 5};

    // Destination array declare kiya (empty)
    int destination[5];

    // Loop source se destination me copy karne ke liye
    for (int i = 0; i < 5; i++) {
        destination[i] = source[i];  // Copy operation
    }

    // Source array print
    cout << "Source Array: ";
    for (int i = 0; i < 5; i++) {
        cout << source[i] << " ";  // Elements display
    }

    cout << endl;  // New line

    // Destination array print
    cout << "Destination Array: ";
    for (int i = 0; i < 5; i++) {
        cout << destination[i] << " ";  // Copied values display
    }

    return 0;  // Program end
}
