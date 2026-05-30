/*
Topic: Functions
Concepts: function declaration, function call, return values
Purpose: Practice writing and calling a simple function.
*/

#include <iostream>
using namespace std;

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10;
    int num2 = 15;

    int result = addNumbers(num1, num2);

    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    cout << "Sum: " << result << endl;

    return 0;
}
