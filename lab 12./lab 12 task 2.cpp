#include <iostream>
using namespace std;

int main()
{
    // Integer array
    int numbers[] = {10, 20, 30, 40, 50};

    // Pointer initialization
    int *ptr = numbers;

    // Access array elements using pointer arithmetic
    cout << "Array Elements using Pointer Arithmetic:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Element " << i << ": "
             << *(ptr + i) << endl;
    }

    return 0;
}
