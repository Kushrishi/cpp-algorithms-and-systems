/*
Topic: Strings
Concepts: loops, conditionals, string building
Purpose: Practice creating a new string without spaces.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence = "C++ programming is powerful";
    string result = "";

    for (char letter : sentence) {
        if (letter != ' ') {
            result += letter;
        }
    }

    cout << "Original sentence: " << sentence << endl;
    cout << "Without spaces: " << result << endl;

    return 0;
}
