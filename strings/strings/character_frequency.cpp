/*
Topic: Strings
Concepts: loops, conditionals, character comparison
Purpose: Practice counting how many times a specific character appears in a string.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "mississippi";
    char target = 's';
    int count = 0;

    for (char letter : word) {
        if (letter == target) {
            count++;
        }
    }

    cout << "Word: " << word << endl;
    cout << "Character searched: " << target << endl;
    cout << "Frequency: " << count << endl;

    return 0;
}
