#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> grades = {82.5, 91.0, 76.5, 88.0, 94.5};

    double sum = 0;

    for (double grade : grades) {
        sum += grade;
    }

    double average = sum / grades.size();

    cout << "Average grade: " << average << endl;

    return 0;
}
