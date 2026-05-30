/*
Topic: Vectors
Concepts: loops, summation, average calculation
Purpose: Practice calculating the sum and average of vector elements.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {85, 90, 78, 92, 88};

    int sum = 0;

    for (int num : numbers) {
        sum += num;
    }

    double average = static_cast<double>(sum) / numbers.size();

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
