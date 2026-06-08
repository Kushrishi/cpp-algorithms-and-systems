#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Step 1: Create a sample file.
    ofstream outputFile("robot_log.txt");

    if (!outputFile) {
        cout << "Error: Could not create robot_log.txt." << endl;
        return 1;
    }

    outputFile << "Robot started successfully." << endl;
    outputFile << "Battery level: 87%" << endl;
    outputFile << "GPS signal acquired." << endl;
    outputFile << "Mission status: Active" << endl;

    outputFile.close();

    // Step 2: Open the file for reading.
    ifstream inputFile("robot_log.txt");

    if (!inputFile) {
        cout << "Error: Could not open robot_log.txt." << endl;
        return 1;
    }

    string line;

    cout << "Reading robot log:" << endl;
    cout << "------------------" << endl;

    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();

    return 0;
}