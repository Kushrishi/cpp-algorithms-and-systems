#include <iostream>
#include <string>
using namespace std;

class Robot {
private:
    string name;
    int batteryLevel;

public:
    Robot(string robotName, int battery) {
        name = robotName;

        if (battery >= 0 && battery <= 100) {
            batteryLevel = battery;
        } else {
            batteryLevel = 100;
        }
    }

    // Getter
    string getName() const {
        return name;
    }

    // Getter
    int getBatteryLevel() const {
        return batteryLevel;
    }

    // Setter
    void setName(string robotName) {
        name = robotName;
    }

    // Setter with validation
    void setBatteryLevel(int battery) {
        if (battery >= 0 && battery <= 100) {
            batteryLevel = battery;
        } else {
            cout << "Invalid battery level. Must be between 0 and 100." << endl;
        }
    }

    void displayStatus() const {
        cout << "Robot Name: " << name << endl;
        cout << "Battery Level: " << batteryLevel << "%" << endl;
    }
};

int main() {
    Robot robot1("SurveyBot", 75);

    robot1.displayStatus();

    cout << endl;

    robot1.setBatteryLevel(90);
    robot1.displayStatus();

    cout << endl;

    robot1.setBatteryLevel(150);
    robot1.displayStatus();

    return 0;
}