#include <iostream>
using namespace std;

int main() {

    int num, i = 1, sum = 0;  
    // num = user ka number
    // i = loop counter (1 se start)
    // sum = total store karne ke liye

    cout << "Enter a positive number: ";
    cin >> num;  // user se input lena

    // jab tak i user ke number tak nahi pohanchta
    while(i <= num) {

        sum = sum + i;  // har number ko sum mein add kar rahe hain
        i++;  // next number par jana
    }

    // final result show karna
    cout << "Sum = " << sum;

    return 0;
}
