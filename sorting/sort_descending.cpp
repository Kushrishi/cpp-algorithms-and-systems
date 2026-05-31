#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& numbers) {
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;
}

void sortDescending(vector<int>& numbers) {
    int n = numbers.size();

    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (numbers[j] > numbers[maxIndex]) {
                maxIndex = j;
            }
        }

        int temp = numbers[i];
        numbers[i] = numbers[maxIndex];
        numbers[maxIndex] = temp;
    }
}

int main() {
    vector<int> numbers = {4, 9, 1, 7, 3, 8, 2};

    cout << "Original vector: ";
    printVector(numbers);

    sortDescending(numbers);

    cout << "Sorted in descending order: ";
    printVector(numbers);

    return 0;
}