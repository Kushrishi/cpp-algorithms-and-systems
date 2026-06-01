#include <iostream>
#include <vector>
using namespace std;

int recursiveBinarySearch(const vector<int>& numbers, int target, int left, int right) {
    if (left > right) {
        return -1;
    }

    int middle = left + (right - left) / 2;

    if (numbers[middle] == target) {
        return middle;
    } else if (numbers[middle] < target) {
        return recursiveBinarySearch(numbers, target, middle + 1, right);
    } else {
        return recursiveBinarySearch(numbers, target, left, middle - 1);
    }
}

int main() {
    vector<int> numbers = {3, 6, 9, 12, 15, 18, 21};
    int target = 12;

    int index = recursiveBinarySearch(numbers, target, 0, numbers.size() - 1);

    if (index != -1) {
        cout << "Target " << target << " found at index " << index << "." << endl;
    } else {
        cout << "Target " << target << " was not found." << endl;
    }

    return 0;
}