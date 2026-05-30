#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "engineering";
    string reversed = "";

    for (int i = word.length() - 1; i >= 0; i--) {
        reversed += word[i];
    }

    cout << "Original word: " << word << endl;
    cout << "Reversed word: " << reversed << endl;

    return 0;
}
