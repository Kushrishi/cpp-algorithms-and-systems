#include <iostream>
using namespace std;

int main() {
    // Normal variable: stored automatically.
    // This is often called stack memory.
    int stackNumber = 25;

    cout << "Stack variable:" << endl;
    cout << "stackNumber = " << stackNumber << endl;
    cout << "Address of stackNumber = " << &stackNumber << endl;

    cout << endl;

    // Dynamic memory: created manually using new.
    // heapNumber stores the address of an int created on the heap.
    int* heapNumber = new int;

    *heapNumber = 75;

    cout << "Heap variable:" << endl;
    cout << "*heapNumber = " << *heapNumber << endl;
    cout << "Address stored in heapNumber = " << heapNumber << endl;

    cout << endl;

    // Dynamic arrays can also be created with new.
    int size = 5;
    int* readings = new int[size];

    for (int i = 0; i < size; i++) {
        readings[i] = (i + 1) * 10;
    }

    cout << "Dynamic array values:" << endl;

    for (int i = 0; i < size; i++) {
        cout << "readings[" << i << "] = " << readings[i] << endl;
    }

    // Clean up manually allocated memory.
    // Use delete for one heap object.
    delete heapNumber;
    heapNumber = nullptr;

    // Use delete[] for a heap array.
    delete[] readings;
    readings = nullptr;

    cout << endl;
    cout << "Dynamic memory has been cleaned up." << endl;

    return 0;
}