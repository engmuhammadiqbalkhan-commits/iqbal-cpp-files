#include <iostream>   // screen par input/output ke liye
using namespace std;  // standard functions use karne ke liye

int main() {

    int a, b;  // do numbers store karne ke liye variables

    cout << "Enter two numbers: ";  
    cin >> a >> b;  // user se dono numbers lena

    // ab dono numbers ka comparison kar rahe hain
    if(a == b)
        cout << "Both are equal";  // agar dono same ho

    else if(a > b)
        cout << "First number is greater";  // agar pehla bara ho

    else
        cout << "First number is smaller";  // warna pehla chota hoga

    return 0;  // program yahan end hota hai
}
