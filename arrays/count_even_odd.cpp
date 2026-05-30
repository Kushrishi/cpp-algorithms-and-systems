/*
Topic: Arrays
Concepts: vectors, loops, conditionals, modulus operator
Purpose: Practice counting even and odd numbers in a collection.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {3, 8, 12, 17, 25, 30, 41};

    int evenCount = 0;
    int oddCount = 0;

    for (int num : numbers) {
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}
