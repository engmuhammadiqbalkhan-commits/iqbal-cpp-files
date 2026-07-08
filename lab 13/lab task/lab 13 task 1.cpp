#include <iostream>
#include <string>
using namespace std;

// Structure declaration
struct Person
{
    string name;
    int age;
    string address;
};

int main()
{
    // Structure variable initialization
    Person person1;

    person1.name = "Ali";
    person1.age = 22;
    person1.address = "Peshawar";

    // Display structure members
    cout << "Person Information" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address << endl;

    return 0;
}
