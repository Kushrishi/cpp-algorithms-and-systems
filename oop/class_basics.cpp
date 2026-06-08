#include <iostream>
#include <string>
using namespace std;

// A class is a blueprint for creating objects
class Car {
public:
    // Attributes / data members
    string brand;
    string model;
    int year;

    // Method / member function
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Creating an object of the Car class
    Car car1;

    car1.brand = "Tesla";
    car1.model = "Model 3";
    car1.year = 2024;

    car1.displayInfo();

    cout << endl;

    Car car2;

    car2.brand = "Apple";
    car2.model = "Autonomous Vehicle Prototype";
    car2.year = 2030;

    car2.displayInfo();

    return 0;
}