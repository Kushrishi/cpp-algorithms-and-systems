/*
Topic: Arrays
Concepts: vectors, indexing, loops, reverse traversal
Purpose: Practice printing elements in reverse order.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {4, 8, 15, 16, 23, 42};

    cout << "Original order: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    cout << endl;

    cout << "Reverse order: ";
    for (int i = numbers.size() - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
