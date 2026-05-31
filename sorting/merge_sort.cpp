#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& numbers) {
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;
}

void merge(vector<int>& numbers, int left, int middle, int right) {
    int leftSize = middle - left + 1;
    int rightSize = right - middle;

    vector<int> leftHalf(leftSize);
    vector<int> rightHalf(rightSize);

    for (int i = 0; i < leftSize; i++) {
        leftHalf[i] = numbers[left + i];
    }

    for (int j = 0; j < rightSize; j++) {
        rightHalf[j] = numbers[middle + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < leftSize && j < rightSize) {
        if (leftHalf[i] <= rightHalf[j]) {
            numbers[k] = leftHalf[i];
            i++;
        } else {
            numbers[k] = rightHalf[j];
            j++;
        }
        k++;
    }

    while (i < leftSize) {
        numbers[k] = leftHalf[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        numbers[k] = rightHalf[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& numbers, int left, int right) {
    if (left >= right) {
        return;
    }

    int middle = left + (right - left) / 2;

    mergeSort(numbers, left, middle);
    mergeSort(numbers, middle + 1, right);

    merge(numbers, left, middle, right);
}

int main() {
    vector<int> numbers = {38, 27, 43, 3, 9, 82, 10};

    cout << "Original vector: ";
    printVector(numbers);

    mergeSort(numbers, 0, numbers.size() - 1);

    cout << "Sorted vector: ";
    printVector(numbers);

    return 0;
}