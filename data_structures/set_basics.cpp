#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numbers;

    numbers.insert(30);
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(10);

    cout << "Set contents: ";

    for (int number : numbers) {
        cout << number << " ";
    }

    cout << endl;

    int target = 20;

    if (numbers.find(target) != numbers.end()) {
        cout << target << " exists in the set." << endl;
    } else {
        cout << target << " does not exist in the set." << endl;
    }

    return 0;
}