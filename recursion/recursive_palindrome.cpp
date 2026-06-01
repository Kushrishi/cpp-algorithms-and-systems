#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& text, int left, int right) {
    if (left >= right) {
        return true;
    }

    if (text[left] != text[right]) {
        return false;
    }

    return isPalindrome(text, left + 1, right - 1);
}

int main() {
    string text = "racecar";

    cout << "String: " << text << endl;

    if (isPalindrome(text, 0, text.length() - 1)) {
        cout << "This string is a palindrome." << endl;
    } else {
        cout << "This string is not a palindrome." << endl;
    }

    return 0;
}