/*
Topic: Strings
Concepts: strings, loops, spaces, word counting
Purpose: Practice counting the number of words in a sentence.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence = "C++ builds strong problem solving skills";

    int wordCount = 1;

    for (char letter : sentence) {
        if (letter == ' ') {
            wordCount++;
        }
    }

    cout << "Sentence: " << sentence << endl;
    cout << "Number of words: " << wordCount << endl;

    return 0;
}
