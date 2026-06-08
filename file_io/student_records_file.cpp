#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int id;
    double grade;

public:
    Student(string studentName, int studentID, double studentGrade) {
        name = studentName;
        id = studentID;
        grade = studentGrade;
    }

    string getName() const {
        return name;
    }

    int getID() const {
        return id;
    }

    double getGrade() const {
        return grade;
    }

    void displayStudent() const {
        cout << "Name: " << name << ", ID: " << id << ", Grade: " << grade << endl;
    }
};

void saveStudentsToFile(const vector<Student>& students, const string& filename) {
    ofstream outputFile(filename);

    if (!outputFile) {
        cout << "Error: Could not open file for writing." << endl;
        return;
    }

    for (const Student& student : students) {
        outputFile << student.getName() << ","
                   << student.getID() << ","
                   << student.getGrade() << endl;
    }

    outputFile.close();

    cout << "Students saved to " << filename << endl;
}

void readStudentsFromFile(const string& filename) {
    ifstream inputFile(filename);

    if (!inputFile) {
        cout << "Error: Could not open file for reading." << endl;
        return;
    }

    string name;
    int id;
    double grade;
    char comma;

    cout << endl;
    cout << "Reading students from file:" << endl;
    cout << "---------------------------" << endl;

    while (getline(inputFile, name, ',') &&
           inputFile >> id >> comma >> grade) {
        inputFile.ignore();

        Student student(name, id, grade);
        student.displayStudent();
    }

    inputFile.close();
}

int main() {
    vector<Student> students;

    students.push_back(Student("Kush", 1001, 88.5));
    students.push_back(Student("Alex", 1002, 91.0));
    students.push_back(Student("Maya", 1003, 84.7));

    string filename = "students.csv";

    saveStudentsToFile(students, filename);
    readStudentsFromFile(filename);

    return 0;
}