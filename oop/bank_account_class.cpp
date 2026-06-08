#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    string ownerName;
    double balance;

public:
    BankAccount(string owner, double startingBalance) {
        ownerName = owner;

        if (startingBalance >= 0) {
            balance = startingBalance;
        } else {
            balance = 0;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Withdrawal amount must be positive." << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    void displayAccount() const {
        cout << fixed << setprecision(2);
        cout << "Owner: " << ownerName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account1("Kush Rishi", 500.00);

    account1.displayAccount();

    cout << endl;

    account1.deposit(250.00);
    account1.withdraw(100.00);
    account1.withdraw(1000.00);

    cout << endl;

    account1.displayAccount();

    return 0;
}