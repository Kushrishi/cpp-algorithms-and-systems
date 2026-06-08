#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Step 1: Create a file with sample sensor readings.
    ofstream outputFile("sensor_readings.txt");

    if (!outputFile) {
        cout << "Error: Could not create sensor_readings.txt." << endl;
        return 1;
    }

    outputFile << 12.5 << endl;
    outputFile << 14.2 << endl;
    outputFile << 13.8 << endl;
    outputFile << 15.1 << endl;
    outputFile << 11.9 << endl;

    outputFile.close();

    // Step 2: Read numbers from the file.
    ifstream inputFile("sensor_readings.txt");

    if (!inputFile) {
        cout << "Error: Could not open sensor_readings.txt." << endl;
        return 1;
    }

    double value;
    double sum = 0;
    int count = 0;

    while (inputFile >> value) {
        sum += value;
        count++;
    }

    inputFile.close();

    cout << fixed << setprecision(2);

    if (count > 0) {
        double average = sum / count;

        cout << "Number of readings: " << count << endl;
        cout << "Sum of readings: " << sum << endl;
        cout << "Average reading: " << average << endl;
    } else {
        cout << "No readings found." << endl;
    }

    return 0;
}