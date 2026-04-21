#include <iostream>   // input aur output ke liye use hoti hai
using namespace std;  // standard functions use karne ke liye

int main() {

    // teen variables banaye hain jisme students ke naam store honge
    string s1, s2, s3;

    // user se teen naam lene ke liye message show kar rahe hain
    cout << "Enter 3 students names:\n";

    // ek hi line mein 3 naam input le rahe hain
    cin >> s1 >> s2 >> s3;

    // ab group ka title print kar rahe hain
    cout << "\nStudents Group:\n";

    // ab har student ka naam alag line mein print kar rahe hain
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    // program yahan end hota hai
    return 0;
}
