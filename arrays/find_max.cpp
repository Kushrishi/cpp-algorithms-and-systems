/*
Topic: Arrays
Concepts: loops, comparison, maximum value
Purpose: Practice finding the largest value in an array.
*/

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {4, 9, 2, 15, 7};
    int size = 5;

    int maxValue = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > maxValue) {
            maxValue = numbers[i];
        }
    }

    cout << "Maximum value: " << maxValue << endl;

    return 0;
}
