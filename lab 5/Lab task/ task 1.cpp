#include <iostream>   // input/output ke liye
using namespace std;

int main() {

    int i = 1;  // loop start karne ke liye variable (1 se start)

    // jab tak i <= 10 hai tab tak loop chalega
    while(i <= 10) {

        cout << i << endl;  // har number new line par print hoga

        i++;  // i ko 1 se increase kar rahe hain (warna loop infinite ho jaye ga)
    }

    return 0;  // program end
}
