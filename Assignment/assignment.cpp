#include <iostream>
using namespace std;
int main() {
double voltage, current, resistance;
cout << "Welcome to Object Oriented Programming in C++!" << endl;
int age;
cout << "Enter your age: ";
cin >> age;
double temperature;
cout << "Enter temperature: ";
cin >> temperature;
if (temperature > 100)
cout << "Overheating detected!" << endl;
double r, area;
cout << "Enter radius: ";
cin >> r;
area = 3.14159 * r * r;
cout << "Area of circle = " << area << endl;
int x = 1, y = 2, z = 3;
cout << x << "," << y << "," << z << endl;
cout << "Enter voltage and current: ";
cin >> voltage >> current;
double total = voltage + current;
cout << "Total = " << total << endl;
int denominator;
cout << "Enter denominator: ";
cin >> denominator;
if (denominator == 0)
cout << "Error: Division by zero" << endl;
int count = 5;
cout << ++count << endl;
double a, b, c;
cin >> a >> b >> c;
double r1, r2, r3;
cin >> r1 >> r2 >> r3;
cout << "Series Resistance = " << (r1 + r2 + r3) << endl;
cin >> r1 >> r2 >> r3;
cout << "Parallel Resistance = " << 1 / (1/r1 + 1/r2 + 1/r3) << endl;
double V = 10, R1 = 4, R2 = 6;
cout << "Voltage across R2 = " << (V * R2 / (R1 + R2)) << endl;
cout << "Current through R2 = " << (V / (R1 + R2) * R1) << endl;
int subjects;
cin >> subjects;
double total_points = 0, total_credits = 0;
for (int i = 1; i <= subjects; i++) {double grade, credit;
cin >> grade >> credit;
total_points += grade * credit;
total_credits += credit;
}
cout << "GPA = " << (total_points / total_credits) << endl;
return 0;
}                                    
