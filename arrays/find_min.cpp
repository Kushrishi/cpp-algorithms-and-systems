/*
Topic: Arrays
Concepts: loops, comparison, minimum value
Purpose: Practice finding the smallest value in an array.
*/

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {4, 9, 2, 15, 7};
    int size = 5;

    int minValue = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] < minValue) {
            minValue = numbers[i];
        }
    }

    cout << "Minimum value: " << minValue << endl;

    return 0;
}
