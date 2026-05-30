/*
Topic: Vectors
Concepts: vector declaration, push_back, indexing, loops
Purpose: Practice creating and modifying a vector.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);

    cout << "Vector elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    cout << endl;
    cout << "First element: " << numbers[0] << endl;
    cout << "Vector size: " << numbers.size() << endl;

    return 0;
}
