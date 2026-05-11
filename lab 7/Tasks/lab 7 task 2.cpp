#include <iostream>   // Input-output library
using namespace std;  // Standard namespace

int main() {  // Program start

    // Character array declare (string store karne ke liye)
    char message[] = "HELLO";

    // Loop har character ko access karega
    for (int i = 0; message[i] != '\0'; i++) {
        cout << message[i] << endl;  // Har character alag line par print
    }

    return 0;  // Program end
}
