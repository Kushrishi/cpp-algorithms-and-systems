#include <fstream>
#include <iostream>
using namespace std;

int main() {
    // Since Code Runner runs this program from inside file_io/,
    // ../build/message.txt means:
    // go up one folder, then go into build/.
    ofstream outputFile("../build/message.txt");

    if (!outputFile) {
        cout << "Error: Could not create file." << endl;
        return 1;
    }

    outputFile << "Hello from C++ file I/O!" << endl;
    outputFile << "This file was created by write_to_file.cpp." << endl;
    outputFile << "File I/O is useful for logs, configs, and saved program output." << endl;

    outputFile.close();

    cout << "Data written to ../build/message.txt successfully." << endl;

    return 0;
}