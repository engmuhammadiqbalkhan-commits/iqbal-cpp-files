#include <iostream>
using namespace std;

int main() {

    int num;  // number store karne ke liye

    cout << "Enter number: ";
    cin >> num;  // user se number lena

    // check kar rahe hain ke number 0 se bada aur 100 se chota ho
    if(num > 0 && num < 100)
        cout << "Number is between 0 and 100";  

    else
        cout << "Number is not in range";  

    return 0;
}
