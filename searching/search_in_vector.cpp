#include <iostream>
#include <vector>
using namespace std;

int searchInVector(const vector<int>& numbers, int target) {
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    vector<int> numbers = {15, 3, 22, 8, 19, 6};
    int target = 22;

    int index = searchInVector(numbers, target);

    if (index != -1) {
        cout << "Target " << target << " found at index " << index << "." << endl;
    } else {
        cout << "Target " << target << " was not found." << endl;
    }

    return 0;
}