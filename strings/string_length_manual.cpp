/*
Topic: Strings
Concepts: loops, characters, manual counting
Purpose: Practice calculating string length without using length().
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "programming";
    int length = 0;

    for (char letter : word) {
        length++;
    }

    cout << "Word: " << word << endl;
    cout << "Manual length: " << length << endl;
    cout << "Built-in length: " << word.length() << endl;

    return 0;
}
