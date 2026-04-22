#include <iostream>
using namespace std;

int main() {

    int i = 1;  // starting value

    // do-while mein pehle code run hota hai, phir condition check hoti hai
    do {
        cout << i << endl;  // number print karna
        i++;  // value increase karna
    }
    while(i <= 10);  // condition check

    return 0;
}
