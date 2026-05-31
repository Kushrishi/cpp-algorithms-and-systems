#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& numbers) {
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;
}

int partition(vector<int>& numbers, int low, int high) {
    int pivot = numbers[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (numbers[j] <= pivot) {
            i++;

            int temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
        }
    }

    int temp = numbers[i + 1];
    numbers[i + 1] = numbers[high];
    numbers[high] = temp;

    return i + 1;
}

void quickSort(vector<int>& numbers, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(numbers, low, high);

        quickSort(numbers, low, pivotIndex - 1);
        quickSort(numbers, pivotIndex + 1, high);
    }
}

int main() {
    vector<int> numbers = {10, 7, 8, 9, 1, 5};

    cout << "Original vector: ";
    printVector(numbers);

    quickSort(numbers, 0, numbers.size() - 1);

    cout << "Sorted vector: ";
    printVector(numbers);

    return 0;
}