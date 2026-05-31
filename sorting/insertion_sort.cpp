#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& numbers) {
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;
}

void insertionSort(vector<int>& numbers) {
    int n = numbers.size();

    for (int i = 1; i < n; i++) {
        int current = numbers[i];
        int j = i - 1;

        while (j >= 0 && numbers[j] > current) {
            numbers[j + 1] = numbers[j];
            j--;
        }

        numbers[j + 1] = current;
    }
}

int main() {
    vector<int> numbers = {9, 5, 1, 4, 3};

    cout << "Original vector: ";
    printVector(numbers);

    insertionSort(numbers);

    cout << "Sorted vector: ";
    printVector(numbers);

    return 0;
}