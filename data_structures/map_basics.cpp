#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> scores;

    scores["Alice"] = 90;
    scores["Bob"] = 85;
    scores["Charlie"] = 95;

    cout << "Student scores:" << endl;

    for (const auto& pair : scores) {
        cout << pair.first << ": " << pair.second << endl;
    }

    string name = "Bob";

    if (scores.find(name) != scores.end()) {
        cout << name << "'s score is: " << scores[name] << endl;
    } else {
        cout << name << " was not found." << endl;
    }

    return 0;
}