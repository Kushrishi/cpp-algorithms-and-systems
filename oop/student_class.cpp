#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int studentID;
    vector<double> grades;

public:
    Student(string studentName, int id) {
        name = studentName;
        studentID = id;
    }

    void addGrade(double grade) {
        if (grade >= 0 && grade <= 100) {
            grades.push_back(grade);
        } else {
            cout << "Invalid grade. Grade must be between 0 and 100." << endl;
        }
    }

    double calculateAverage() const {
        if (grades.empty()) {
            return 0;
        }

        double sum = 0;

        for (double grade : grades) {
            sum += grade;
        }

        return sum / grades.size();
    }

    void displayStudentInfo() const {
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Grades: ";

        for (double grade : grades) {
            cout << grade << " ";
        }

        cout << endl;
        cout << "Average: " << calculateAverage() << endl;
    }
};

int main() {
    Student student1("Kush Rishi", 1001);

    student1.addGrade(88);
    student1.addGrade(92);
    student1.addGrade(79);
    student1.addGrade(105);

    student1.displayStudentInfo();

    return 0;
}