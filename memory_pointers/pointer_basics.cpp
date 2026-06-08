#include <iostream>
using namespace std;

int main() {
    int number = 42;

    // A pointer stores the memory address of another variable.
    int* numberPtr = &number;

    cout << "Original number: " << number << endl;

    cout << "Address of number using &number: " << &number << endl;
    cout << "Address stored inside numberPtr: " << numberPtr << endl;

    cout << "Value accessed using number: " << number << endl;
    cout << "Value accessed using *numberPtr: " << *numberPtr << endl;

    // Changing the value through the pointer also changes the original variable.
    *numberPtr = 100;

    cout << endl;
    cout << "After changing *numberPtr to 100:" << endl;
    cout << "number is now: " << number << endl;
    cout << "*numberPtr is now: " << *numberPtr << endl;

    // nullptr means the pointer currently points to nothing.
    int* emptyPtr = nullptr;

    cout << endl;
    cout << boolalpha;
    cout << "Is emptyPtr equal to nullptr? " << (emptyPtr == nullptr) << endl;

    if (emptyPtr != nullptr) {
        cout << "Value at emptyPtr: " << *emptyPtr << endl;
    } else {
        cout << "emptyPtr does not point to a valid int." << endl;
    }

    return 0;
}