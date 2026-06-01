#include <iostream>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }

    return base * power(base, exponent - 1);
}

int main() {
    int base = 2;
    int exponent = 5;

    cout << "Base: " << base << endl;
    cout << "Exponent: " << exponent << endl;
    cout << "Result: " << power(base, exponent) << endl;

    return 0;
}