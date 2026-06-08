#include <iostream>
using namespace std;

void addTenByReference(int& value) {
    value += 10;
}

void addTenByPointer(int* valuePtr) {
    if (valuePtr != nullptr) {
        *valuePtr += 10;
    } else {
        cout << "Pointer is nullptr, so nothing was changed." << endl;
    }
}

void printReadOnlyValue(const int& value) {
    cout << "Read-only value: " << value << endl;
}

int main() {
    int a = 5;
    int b = 20;

    cout << "Original values:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << endl;

    // A reference is another name for an existing variable.
    int& refToA = a;

    refToA = 7;

    cout << "After setting refToA = 7:" << endl;
    cout << "a = " << a << endl;
    cout << "refToA = " << refToA << endl;

    cout << endl;

    // A pointer stores an address.
    int* ptr = &a;

    *ptr = 15;

    cout << "After setting *ptr = 15 while ptr points to a:" << endl;
    cout << "a = " << a << endl;
    cout << "*ptr = " << *ptr << endl;

    cout << endl;

    // Unlike a reference, a pointer can point to a different variable later.
    ptr = &b;

    *ptr = 30;

    cout << "After changing ptr to point to b and setting *ptr = 30:" << endl;
    cout << "b = " << b << endl;
    cout << "*ptr = " << *ptr << endl;

    cout << endl;

    addTenByReference(a);

    cout << "After addTenByReference(a):" << endl;
    cout << "a = " << a << endl;

    cout << endl;

    addTenByPointer(&b);

    cout << "After addTenByPointer(&b):" << endl;
    cout << "b = " << b << endl;

    cout << endl;

    int* emptyPtr = nullptr;
    addTenByPointer(emptyPtr);

    cout << endl;

    printReadOnlyValue(a);

    return 0;
}