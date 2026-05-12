#include <iostream>      // Input/output library
using namespace std;     // Standard namespace

int main() {

    // Declare and initialize 4x4 integer array
    int arr[4][4] = {
        {10, 25, 3, 8},    // First row
        {14, 6, 30, 2},    // Second row
        {9, 18, 7, 22},    // Third row
        {11, 5, 27, 4}     // Fourth row
    };

    // Assume first element is the maximum
    int max = arr[0][0];

    // Loop through rows
    for(int i = 0; i < 4; i++) {

        // Loop through columns
        for(int j = 0; j < 4; j++) {

            // Check if current element is greater than max
            if(arr[i][j] > max) {

                // Update maximum value
                max = arr[i][j];
            }
        }
    }

    // Display maximum value found in array
    cout << "Maximum value = " << max << endl;

    return 0;   // End program
}
