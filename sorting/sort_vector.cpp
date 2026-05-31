#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& numbers) {
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers = {15, 3, 22, 8, 1, 19, 6};

    cout << "Original vector: ";
    printVector(numbers);

    sort(numbers.begin(), numbers.end());

    cout << "Sorted vector using STL sort: ";
    printVector(numbers);

    return 0;
}