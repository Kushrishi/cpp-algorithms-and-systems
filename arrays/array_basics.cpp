/*
Topic: Arrays
Concepts: array declaration, indexing, loops
Purpose: Practice basic array operations in C++.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {4, 8, 15, 16, 23, 42};

    int sum = 0;
    int maxValue = numbers[0];

    for (int num : numbers) {
        sum += num;

        if (num > maxValue) {
            maxValue = num;
        }
    }

    cout << "Array elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    cout << endl;
    cout << "Sum: " << sum << endl;
    cout << "Maximum value: " << maxValue << endl;

    return 0;
}
