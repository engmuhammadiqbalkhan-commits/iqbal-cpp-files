#include <iostream>   // input/output ke liye
using namespace std;

int main() {

    // different type ke variables declare kar rahe hain
    int a = 10;        // integer variable
    float b = 5.5;     // float variable
    char c = 'A';      // character variable

    // values print karna
    cout << "Values:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    // memory size print karna
    cout << "\nMemory Size:\n";
    cout << "a = " << sizeof(a) << " bytes\n";
    cout << "b = " << sizeof(b) << " bytes\n";
    cout << "c = " << sizeof(c) << " bytes\n";

    // memory location (address) print karna
    cout << "\nMemory Address:\n";
    cout << "a = " << &a << endl;
    cout << "b = " << &b << endl;
    cout << "c = " << (void*)&c << endl; // char ka address properly show karne ke liye

    return 0;
}
