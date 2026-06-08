#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Step 1: Create a starting log file.
    ofstream startFile("system_log.txt");

    if (!startFile) {
        cout << "Error: Could not create system_log.txt." << endl;
        return 1;
    }

    startFile << "System booted." << endl;
    startFile << "Sensors initialized." << endl;

    startFile.close();

    // Step 2: Open the same file in append mode.
    ofstream appendFile("system_log.txt", ios::app);

    if (!appendFile) {
        cout << "Error: Could not open system_log.txt for appending." << endl;
        return 1;
    }

    appendFile << "GNSS receiver connected." << endl;
    appendFile << "Data recording started." << endl;

    appendFile.close();

    // Step 3: Read the final file.
    ifstream inputFile("system_log.txt");

    if (!inputFile) {
        cout << "Error: Could not read system_log.txt." << endl;
        return 1;
    }

    string line;

    cout << "Final system log:" << endl;
    cout << "-----------------" << endl;

    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();

    return 0;
}