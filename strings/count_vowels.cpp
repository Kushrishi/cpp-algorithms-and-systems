/*
Topic: Strings
Concepts: loops, conditionals, character comparison
Purpose: Practice counting vowels in a string.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "engineering";
    int vowelCount = 0;

    for (char letter : word) {
        if (letter == 'a' || letter == 'e' || letter == 'i' ||
            letter == 'o' || letter == 'u') {
            vowelCount++;
        }
    }

    cout << "Word: " << word << endl;
    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}
