/*
Topic: Vectors
Concepts: loops, comparison, maximum value
Purpose: Practice finding the largest value in a vector.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {12, 45, 7, 89, 34, 22};

    int maxValue = numbers[0];

    for (int num : numbers) {
        if (num > maxValue) {
            maxValue = num;
        }
    }

    cout << "Maximum value: " << maxValue << endl;

    return 0;
}
