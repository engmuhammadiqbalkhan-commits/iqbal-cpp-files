#include <iostream>
using namespace std;

int main() {

    int num;  // number ke liye variable

    cout << "Enter number: ";
    cin >> num;

    // sirf positive number check kar rahe hain
    if(num > 0)
        cout << "Number is positive";

    return 0;
}
