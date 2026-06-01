#include <iostream>
#include <vector>
using namespace std;

int recursiveArraySum(const vector<int>& numbers, int index) {
    if (index == numbers.size()) {
        return 0;
    }

    return numbers[index] + recursiveArraySum(numbers, index + 1);
}

int main() {
    vector<int> numbers = {4, 7, 2, 9, 1};

    cout << "Array values: ";

    for (int number : numbers) {
        cout << number << " ";
    }

    cout << endl;

    int sum = recursiveArraySum(numbers, 0);

    cout << "Sum: " << sum << endl;

    return 0;
}