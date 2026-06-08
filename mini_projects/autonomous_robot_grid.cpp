#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

class RobotGrid {
private:
    int rows;
    int cols;
    int robotRow;
    int robotCol;
    int targetRow;
    int targetCol;
    vector<vector<char>> grid;

public:
    RobotGrid(int numberOfRows, int numberOfCols) {
        rows = numberOfRows;
        cols = numberOfCols;

        robotRow = 0;
        robotCol = 0;

        targetRow = rows - 1;
        targetCol = cols - 1;

        grid.resize(rows, vector<char>(cols, '.'));

        addObstacles();
        updateGrid();
    }

    void addObstacles() {
        if (rows >= 5 && cols >= 5) {
            grid[1][2] = '#';
            grid[2][2] = '#';
            grid[3][1] = '#';
            grid[3][3] = '#';
        }
    }

    void updateGrid() {
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] != '#') {
                    grid[r][c] = '.';
                }
            }
        }

        grid[targetRow][targetCol] = 'T';
        grid[robotRow][robotCol] = 'R';
    }

    void displayGrid() const {
        cout << endl;
        cout << "Grid:" << endl;
        cout << "R = Robot, T = Target, # = Obstacle" << endl;
        cout << endl;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                cout << grid[r][c] << " ";
            }
            cout << endl;
        }

        cout << endl;
        cout << "Robot position: (" << robotRow << ", " << robotCol << ")" << endl;
        cout << "Target position: (" << targetRow << ", " << targetCol << ")" << endl;
    }

    bool isValidMove(int newRow, int newCol) const {
        if (newRow < 0 || newRow >= rows || newCol < 0 || newCol >= cols) {
            return false;
        }

        if (grid[newRow][newCol] == '#') {
            return false;
        }

        return true;
    }

    void moveRobot(string direction) {
        int newRow = robotRow;
        int newCol = robotCol;

        if (direction == "up") {
            newRow--;
        } else if (direction == "down") {
            newRow++;
        } else if (direction == "left") {
            newCol--;
        } else if (direction == "right") {
            newCol++;
        } else {
            cout << "Invalid direction." << endl;
            return;
        }

        if (isValidMove(newRow, newCol)) {
            robotRow = newRow;
            robotCol = newCol;
            cout << "Robot moved " << direction << "." << endl;
        } else {
            cout << "Move blocked. The robot cannot move " << direction << "." << endl;
        }

        updateGrid();
    }

    bool hasReachedTarget() const {
        return robotRow == targetRow && robotCol == targetCol;
    }

    void autonomousStep() {
        if (hasReachedTarget()) {
            cout << "Robot has already reached the target." << endl;
            return;
        }

        int bestRow = robotRow;
        int bestCol = robotCol;
        string bestMove = "";

        if (robotRow < targetRow && isValidMove(robotRow + 1, robotCol)) {
            bestRow = robotRow + 1;
            bestCol = robotCol;
            bestMove = "down";
        } else if (robotCol < targetCol && isValidMove(robotRow, robotCol + 1)) {
            bestRow = robotRow;
            bestCol = robotCol + 1;
            bestMove = "right";
        } else if (robotRow > targetRow && isValidMove(robotRow - 1, robotCol)) {
            bestRow = robotRow - 1;
            bestCol = robotCol;
            bestMove = "up";
        } else if (robotCol > targetCol && isValidMove(robotRow, robotCol - 1)) {
            bestRow = robotRow;
            bestCol = robotCol - 1;
            bestMove = "left";
        } else {
            cout << "Autonomous move blocked. Robot could not find a simple next step." << endl;
            return;
        }

        robotRow = bestRow;
        robotCol = bestCol;

        cout << "Autonomous move: " << bestMove << endl;

        updateGrid();
    }

    void runAutonomousMode() {
        int stepCount = 0;
        int maxSteps = rows * cols;

        cout << endl;
        cout << "Starting autonomous mode..." << endl;

        while (!hasReachedTarget() && stepCount < maxSteps) {
            autonomousStep();
            displayGrid();
            stepCount++;
        }

        if (hasReachedTarget()) {
            cout << "Target reached in " << stepCount << " autonomous steps." << endl;
        } else {
            cout << "Autonomous mode stopped after " << stepCount << " steps." << endl;
        }
    }
};

void printMenu() {
    cout << endl;
    cout << "Autonomous Robot Grid" << endl;
    cout << "---------------------" << endl;
    cout << "1. Display grid" << endl;
    cout << "2. Move up" << endl;
    cout << "3. Move down" << endl;
    cout << "4. Move left" << endl;
    cout << "5. Move right" << endl;
    cout << "6. Run one autonomous step" << endl;
    cout << "7. Run full autonomous mode" << endl;
    cout << "8. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    RobotGrid robotGrid(5, 5);

    int choice = 0;

    while (choice != 8) {
        printMenu();
        cin >> choice;

        if (choice == 1) {
            robotGrid.displayGrid();
        } else if (choice == 2) {
            robotGrid.moveRobot("up");
        } else if (choice == 3) {
            robotGrid.moveRobot("down");
        } else if (choice == 4) {
            robotGrid.moveRobot("left");
        } else if (choice == 5) {
            robotGrid.moveRobot("right");
        } else if (choice == 6) {
            robotGrid.autonomousStep();

            if (robotGrid.hasReachedTarget()) {
                cout << "Robot reached the target." << endl;
            }
        } else if (choice == 7) {
            robotGrid.runAutonomousMode();
        } else if (choice == 8) {
            cout << "Exiting autonomous robot grid." << endl;
        } else {
            cout << "Invalid option. Please choose again." << endl;
        }
    }

    return 0;
}