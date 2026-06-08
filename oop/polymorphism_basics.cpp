#include <iostream>
#include <string>
using namespace std;

// Base class
class Robot {
private:
    string name;

public:
    Robot(string robotName) {
        name = robotName;
    }

    string getName() const {
        return name;
    }

    // virtual allows child classes to override this function properly
    virtual void performTask() const {
        cout << name << " is performing a general robot task." << endl;
    }
};

// Derived class
class DeliveryRobot : public Robot {
public:
    DeliveryRobot(string robotName) : Robot(robotName) {
    }

    void performTask() const override {
        cout << getName() << " is delivering a package." << endl;
    }
};

// Derived class
class SurveyRobot : public Robot {
public:
    SurveyRobot(string robotName) : Robot(robotName) {
    }

    void performTask() const override {
        cout << getName() << " is scanning terrain and collecting mapping data." << endl;
    }
};

// This function can accept any type of Robot
void runRobotTask(const Robot& robot) {
    robot.performTask();
}

int main() {
    Robot basicRobot("BasicBot");
    DeliveryRobot deliveryBot("DeliveryBot");
    SurveyRobot surveyBot("SurveyBot");

    runRobotTask(basicRobot);
    runRobotTask(deliveryBot);
    runRobotTask(surveyBot);

    return 0;
}