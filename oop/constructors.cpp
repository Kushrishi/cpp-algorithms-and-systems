#include <iostream>
#include <string>
using namespace std;

class Robot {
public:
    string name;
    int batteryLevel;

    // Default constructor
    Robot() {
        name = "Unnamed Robot";
        batteryLevel = 100;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    Robot(string robotName, int battery) {
        name = robotName;
        batteryLevel = battery;
        cout << "Parameterized constructor called for " << name << "." << endl;
    }

    // Destructor
    ~Robot() {
        cout << "Destructor called for " << name << "." << endl;
    }

    void displayStatus() {
        cout << "Robot Name: " << name << endl;
        cout << "Battery Level: " << batteryLevel << "%" << endl;
    }
};

int main() {
    Robot robot1;
    robot1.displayStatus();

    cout << endl;

    Robot robot2("Tesla Bot", 85);
    robot2.displayStatus();

    cout << endl;
    cout << "Program is ending." << endl;

    return 0;
}