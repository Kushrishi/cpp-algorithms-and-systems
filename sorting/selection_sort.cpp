#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& numbers) {
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;
}

void selectionSort(vector<int>& numbers) {
    int n = numbers.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }

        int temp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;
    }
}

int main() {
    vector<int> numbers = {29, 10, 14, 37, 13};

    cout << "Original vector: ";
    printVector(numbers);

    selectionSort(numbers);

    cout << "Sorted vector: ";
    printVector(numbers);

    return 0;
}