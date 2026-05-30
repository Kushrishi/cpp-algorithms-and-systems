/*
Topic: Functions
Concepts: pass by value, function parameters, variable scope
Purpose: Practice understanding how passing by value copies a variable.
*/

#include <iostream>
using namespace std;

void changeValue(int number) {
    number = 100;
    cout << "Inside function: " << number << endl;
}

int main() {
    int originalNumber = 25;

    cout << "Before function call: " << originalNumber << endl;

    changeValue(originalNumber);

    cout << "After function call: " << originalNumber << endl;

    return 0;
}
