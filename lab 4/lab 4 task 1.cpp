#include <iostream>   // input/output ke liye
using namespace std;

int main() {

    int day;  // day number store karne ke liye

    cout << "Enter day number (1-7): ";
    cin >> day;  // user se number lena

    // switch use kar ke day check kar rahe hain
    switch(day) {

        case 1:
            cout << "Monday";
            break;  // yahan program ruk jata hai

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;

        default:
            cout << "Invalid day number";  // agar 1-7 ke ilawa kuch ho
    }

    return 0;  // program end
}
