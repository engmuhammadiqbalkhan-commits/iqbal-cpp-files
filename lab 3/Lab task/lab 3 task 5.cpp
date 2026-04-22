#include <iostream>
using namespace std;

int main() {

    int num;  // number store karne ke liye

    cout << "Enter number: ";
    cin >> num;

    // number ka type check kar rahe hain
    if(num > 0)
        cout << "Positive number";

    else if(num < 0)
        cout << "Negative number";

    else
        cout << "Zero";

    return 0;
}
