#include <iostream>
using namespace std;

int main() {
    int readings[5] = {10, 20, 30, 40, 50};

    // The array name acts like a pointer to the first element.
    int* readingsPtr = readings;

    cout << "Array values using normal indexing:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "readings[" << i << "] = " << readings[i] << endl;
    }

    cout << endl;
    cout << "Array values using pointer arithmetic:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "*(readingsPtr + " << i << ") = " << *(readingsPtr + i) << endl;
    }

    cout << endl;
    cout << "Memory addresses of array elements:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Address of readings[" << i << "] = " << (readingsPtr + i) << endl;
    }

    // Modify the third element using the pointer.
    *(readingsPtr + 2) = 99;

    cout << endl;
    cout << "After changing *(readingsPtr + 2) to 99:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "readings[" << i << "] = " << readings[i] << endl;
    }

    return 0;
}