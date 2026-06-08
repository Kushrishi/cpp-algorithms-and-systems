#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Robot {
private:
    string name;
    int xPosition;
    int yPosition;
    int batteryLevel;
    bool active;

public:
    Robot(string robotName) {
        name = robotName;
        xPosition = 0;
        yPosition = 0;
        batteryLevel = 100;
        active = true;
    }

    string getName() const {
        return name;
    }

    int getXPosition() const {
        return xPosition;
    }

    int getYPosition() const {
        return yPosition;
    }

    int getBatteryLevel() const {
        return batteryLevel;
    }

    bool isActive() const {
        return active;
    }

    void move(int xChange, int yChange) {
        if (!active) {
            cout << name << " is inactive and cannot move." << endl;
            return;
        }

        int movementCost = (abs(xChange) + abs(yChange)) * 5;

        if (movementCost > batteryLevel) {
            cout << name << " does not have enough battery to move." << endl;
            return;
        }

        xPosition += xChange;
        yPosition += yChange;
        batteryLevel -= movementCost;

        cout << name << " moved to position (" << xPosition << ", " << yPosition << ")." << endl;
        cout << "Battery used: " << movementCost << "%" << endl;
    }

    void scanArea() {
        if (!active) {
            cout << name << " is inactive and cannot scan." << endl;
            return;
        }

        if (batteryLevel < 10) {
            cout << name << " does not have enough battery to scan." << endl;
            return;
        }

        batteryLevel -= 10;

        cout << name << " scanned the surrounding area." << endl;
        cout << "Mapping data collected successfully." << endl;
    }

    void recharge() {
        batteryLevel = 100;
        active = true;

        cout << name << " has been recharged to 100%." << endl;
    }

    void shutdown() {
        active = false;
        cout << name << " has been shut down." << endl;
    }

    void displayStatus() const {
        cout << "Robot Name: " << name << endl;
        cout << "Position: (" << xPosition << ", " << yPosition << ")" << endl;
        cout << "Battery Level: " << batteryLevel << "%" << endl;

        if (active) {
            cout << "Status: Active" << endl;
        } else {
            cout << "Status: Inactive" << endl;
        }
    }
};

int main() {
    Robot robot1("AutonomyBot");

    robot1.displayStatus();

    cout << endl;

    robot1.move(3, 2);

    cout << endl;

    robot1.scanArea();

    cout << endl;

    robot1.displayStatus();

    cout << endl;

    robot1.move(10, 10);

    cout << endl;

    robot1.shutdown();
    robot1.move(1, 1);

    cout << endl;

    robot1.recharge();

    cout << endl;

    robot1.displayStatus();

    return 0;
}   