#include <iostream>
#include <vector>
#include <string>
using namespace std;

double calculateAverage(const vector<double>& grades) {
    double total = 0;

    for (double grade : grades) {
        total += grade;
    }

    return total / grades.size();
}

double findHighestGrade(const vector<double>& grades) {
    double highest = grades[0];

    for (double grade : grades) {
        if (grade > highest) {
            highest = grade;
        }
    }

    return highest;
}

double findLowestGrade(const vector<double>& grades) {
    double lowest = grades[0];

    for (double grade : grades) {
        if (grade < lowest) {
            lowest = grade;
        }
    }

    return lowest;
}

string getLetterGrade(double average) {
    if (average >= 90) {
        return "A";
    } else if (average >= 80) {
        return "B";
    } else if (average >= 70) {
        return "C";
    } else if (average >= 60) {
        return "D";
    } else {
        return "F";
    }
}

void printGradeReport(const string& studentName, const vector<double>& grades) {
    double average = calculateAverage(grades);
    double highest = findHighestGrade(grades);
    double lowest = findLowestGrade(grades);
    string letterGrade = getLetterGrade(average);

    cout << "Grade Report" << endl;
    cout << "------------" << endl;
    cout << "Student: " << studentName << endl;

    cout << "Grades: ";
    for (double grade : grades) {
        cout << grade << " ";
    }

    cout << endl;
    cout << "Average: " << average << endl;
    cout << "Highest grade: " << highest << endl;
    cout << "Lowest grade: " << lowest << endl;
    cout << "Letter grade: " << letterGrade << endl;

    if (average >= 60) {
        cout << "Status: Passing" << endl;
    } else {
        cout << "Status: Failing" << endl;
    }
}

int main() {
    string studentName;
    int numberOfGrades;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter number of grades: ";
    cin >> numberOfGrades;

    if (numberOfGrades <= 0) {
        cout << "Number of grades must be greater than 0." << endl;
        return 1;
    }

    vector<double> grades;

    for (int i = 0; i < numberOfGrades; i++) {
        double grade;

        cout << "Enter grade " << i + 1 << ": ";
        cin >> grade;

        while (grade < 0 || grade > 100) {
            cout << "Invalid grade. Enter a grade between 0 and 100: ";
            cin >> grade;
        }

        grades.push_back(grade);
    }

    cout << endl;

    printGradeReport(studentName, grades);

    return 0;
}