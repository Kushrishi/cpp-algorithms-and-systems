#include <iostream>
#include <vector>
using namespace std;

int findFirstOccurrence(const vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;
    int result = -1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (numbers[middle] == target) {
            result = middle;
            right = middle - 1;
        } else if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return result;
}

int main() {
    vector<int> numbers = {1, 2, 4, 4, 4, 5, 7, 9};
    int target = 4;

    int index = findFirstOccurrence(numbers, target);

    if (index != -1) {
        cout << "First occurrence of " << target << " is at index " << index << "." << endl;
    } else {
        cout << "Target " << target << " was not found." << endl;
    }

    return 0;
}