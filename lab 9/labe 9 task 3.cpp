#include <iostream>      // Library for input/output
using namespace std;     // Standard namespace

// Function declaration: calculates sum of array elements
int calculateSum(int arr[], int size);

int main() {
    int arr[10];         // Array to store 10 integers

    // Input loop for 10 values
    cout << "Enter 10 integers:" << endl;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];   // Store user input in array
    }

    // Call function to calculate sum
    int sum = calculateSum(arr, 10);

    // Calculate average using sum
    double average = sum / 10.0;

    // Display results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;            // End program
}

// Function definition to calculate sum
int calculateSum(int arr[], int size) {
    int sum = 0;         // Initialize sum to 0

    // Loop through array elements
    for(int i = 0; i < size; i++) {
        sum += arr[i];   // Add each element to sum
    }

    return sum;          // Return final sum
}
