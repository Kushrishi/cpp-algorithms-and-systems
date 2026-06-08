#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string holder, int number, double startingBalance) {
        accountHolder = holder;
        accountNumber = number;

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

    void displayAccountInfo() const {
        cout << endl;
        cout << "Account Information" << endl;
        cout << "-------------------" << endl;
        cout << "Account holder: " << accountHolder << endl;
        cout << "Account number: " << accountNumber << endl;
        cout << "Current balance: $" << balance << endl;
    }

    double getBalance() const {
        return balance;
    }
};

void printMenu() {
    cout << endl;
    cout << "Bank Account Manager" << endl;
    cout << "--------------------" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Display account info" << endl;
    cout << "4. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    string holderName;
    int accountNumber;
    double startingBalance;

    cout << "Enter account holder name: ";
    getline(cin, holderName);

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter starting balance: ";
    cin >> startingBalance;

    BankAccount account(holderName, accountNumber, startingBalance);

    int choice = 0;

    while (choice != 4) {
        printMenu();
        cin >> choice;

        if (choice == 1) {
            double amount;

            cout << "Enter deposit amount: ";
            cin >> amount;

            account.deposit(amount);
        } else if (choice == 2) {
            double amount;

            cout << "Enter withdrawal amount: ";
            cin >> amount;

            account.withdraw(amount);
        } else if (choice == 3) {
            account.displayAccountInfo();
        } else if (choice == 4) {
            cout << "Exiting bank account manager." << endl;
        } else {
            cout << "Invalid option. Please choose again." << endl;
        }
    }

    return 0;
}