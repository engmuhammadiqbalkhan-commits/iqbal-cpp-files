#include <iostream>      // Input/output library
using namespace std;     // Standard namespace

int main() {

    // Declare and initialize 3x3 array with values
    int arr[3][3] = {
        {2, 4, 6},   // First row
        {1, 3, 5},   // Second row
        {7, 8, 9}    // Third row
    };

    int totalSum = 0;   // Stores total sum of all elements

    // Loop through each row
    for(int i = 0; i < 3; i++) {

        int rowSum = 0;   // Reset row sum for each row

        // Loop through columns in current row
        for(int j = 0; j < 3; j++) {

            rowSum += arr[i][j];    // Add element to row sum
            totalSum += arr[i][j];   // Add element to total sum
        }

        // Display sum of current row
        cout << "Sum of row " << i + 1 << " = " << rowSum << endl;
    }

    // Loop through each column
    for(int j = 0; j < 3; j++) {

        int colSum = 0;   // Reset column sum

        // Loop through rows for current column
        for(int i = 0; i < 3; i++) {

            colSum += arr[i][j];   // Add column elements
        }

        // Display sum of current column
        cout << "Sum of column " << j + 1 << " = " << colSum << endl;
    }

    // Display total sum of all elements
    cout << "Total sum = " << totalSum << endl;

    return 0;   // End program
}
