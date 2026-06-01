#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& text, int index) {
    if (index < 0) {
        return "";
    }

    return text[index] + reverseString(text, index - 1);
}

int main() {
    string text = "robotics";

    cout << "Original string: " << text << endl;

    string reversed = reverseString(text, text.length() - 1);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}