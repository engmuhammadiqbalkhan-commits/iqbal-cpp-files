#include <iostream>
using namespace std;

int main() {

    char grade;  // grade store karne ke liye

    cout << "Enter grade (A/B/C/D/F): ";
    cin >> grade;

    // grade ke hisaab se result show karna
    switch(grade) {

        case 'A':
            cout << "Excellent";
            break;

        case 'B':
            cout << "Very Good";
            break;

        case 'C':
            cout << "Good";
            break;

        case 'D':
            cout << "Pass";
            break;

        case 'F':
            cout << "Fail";
            break;

        default:
            cout << "Invalid Grade";  // agar wrong input ho
    }

    return 0;
}
