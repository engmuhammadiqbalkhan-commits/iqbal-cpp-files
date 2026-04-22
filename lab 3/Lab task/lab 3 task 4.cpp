#include <iostream>
using namespace std;

int main() {

    int age;  // age store karne ke liye

    cout << "Enter your age: ";
    cin >> age;

    // check kar rahe hain ke age 18 ya us se zyada hai ya nahi
    if(age >= 18)
        cout << "You are an adult";

    else
        cout << "You are not an adult";

    return 0;
}
