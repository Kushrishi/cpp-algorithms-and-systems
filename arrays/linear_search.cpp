/*
Topic: Arrays
Concepts: loops, conditionals, linear search
Purpose: Practice searching for a target value in an array.
*/

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {4, 9, 2, 15, 7};
    int size = 5;
    int target = 15;

    bool found = false;

    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            found = true;
            cout << "Target found at index: " << i << endl;
            break;
        }
    }

    if (!found) {
        cout << "Target not found." << endl;
    }

    return 0;
}
