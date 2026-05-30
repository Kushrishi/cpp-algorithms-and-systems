/*
Topic: Strings
Concepts: indexing, loops, conditionals
Purpose: Practice checking whether a string is a palindrome.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "racecar";
    bool isPalindrome = true;

    int left = 0;
    int right = word.length() - 1;

    while (left < right) {
        if (word[left] != word[right]) {
            isPalindrome = false;
            break;
        }

        left++;
        right--;
    }

    if (isPalindrome) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }

    return 0;
}
