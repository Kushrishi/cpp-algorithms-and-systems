#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& numbers) {
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int>& numbers) {
    int n = numbers.size();

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original vector: ";
    printVector(numbers);

    bubbleSort(numbers);

    cout << "Sorted vector: ";
    printVector(numbers);

    return 0;
}