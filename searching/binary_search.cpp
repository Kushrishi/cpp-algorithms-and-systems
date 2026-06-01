#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (numbers[middle] == target) {
            return middle;
        } else if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> numbers = {2, 4, 6, 8, 10, 12, 14};
    int target = 10;

    int index = binarySearch(numbers, target);

    if (index != -1) {
        cout << "Target " << target << " found at index " << index << "." << endl;
    } else {
        cout << "Target " << target << " was not found." << endl;
    }

    return 0;
}