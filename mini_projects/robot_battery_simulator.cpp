#include <iostream>
#include <string>
using namespace std;

class Robot {
private:
    string name;
    int batteryLevel;
    int distanceTravelled;

public:
    Robot(string robotName) {
        name = robotName;
        batteryLevel = 100;
        distanceTravelled = 0;
    }

    void moveForward() {
        if (batteryLevel >= 10) {
            distanceTravelled += 1;
            batteryLevel -= 10;

            cout << name << " moved forward 1 metre." << endl;
        } else {
            cout << name << " does not have enough battery to move." << endl;
        }
    }

    void scanEnvironment() {
        if (batteryLevel >= 5) {
            batteryLevel -= 5;

            cout << name << " scanned the environment." << endl;
        } else {
            cout << name << " does not have enough battery to scan." << endl;
        }
    }

    void recharge() {
        batteryLevel = 100;

        cout << name << " has been fully recharged." << endl;
    }

    void displayStatus() const {
        cout << endl;
        cout << "Robot Status" << endl;
        cout << "------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Battery level: " << batteryLevel << "%" << endl;
        cout << "Distance travelled: " << distanceTravelled << " metres" << endl;
    }

    bool isBatteryLow() const {
        return batteryLevel < 20;
    }
};

void printMenu() {
    cout << endl;
    cout << "Robot Battery Simulator" << endl;
    cout << "-----------------------" << endl;
    cout << "1. Move forward" << endl;
    cout << "2. Scan environment" << endl;
    cout << "3. Recharge" << endl;
    cout << "4. Display status" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    string robotName;

    cout << "Enter robot name: ";
    getline(cin, robotName);

    Robot robot(robotName);

    int choice = 0;

    while (choice != 5) {
        printMenu();
        cin >> choice;

        if (choice == 1) {
            robot.moveForward();
        } else if (choice == 2) {
            robot.scanEnvironment();
        } else if (choice == 3) {
            robot.recharge();
        } else if (choice == 4) {
            robot.displayStatus();

            if (robot.isBatteryLow()) {
                cout << "Warning: battery is low." << endl;
            }
        } else if (choice == 5) {
            cout << "Exiting robot battery simulator." << endl;
        } else {
            cout << "Invalid option. Please choose again." << endl;
        }
    }

    return 0;
}