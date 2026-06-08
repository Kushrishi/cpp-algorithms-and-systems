#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Item {
    string name;
    int quantity;
    double price;
};

void displayItem(const Item& item) {
    cout << "Name: " << item.name << endl;
    cout << "Quantity: " << item.quantity << endl;
    cout << "Price: $" << item.price << endl;
}

void displayInventory(const vector<Item>& inventory) {
    if (inventory.empty()) {
        cout << "Inventory is empty." << endl;
        return;
    }

    cout << endl;
    cout << "Current Inventory" << endl;
    cout << "-----------------" << endl;

    for (int i = 0; i < inventory.size(); i++) {
        cout << "Item " << i + 1 << ":" << endl;
        displayItem(inventory[i]);
        cout << endl;
    }
}

int findItemIndex(const vector<Item>& inventory, const string& itemName) {
    for (int i = 0; i < inventory.size(); i++) {
        if (inventory[i].name == itemName) {
            return i;
        }
    }

    return -1;
}

void addItem(vector<Item>& inventory) {
    Item newItem;

    cout << "Enter item name: ";
    cin.ignore();
    getline(cin, newItem.name);

    cout << "Enter quantity: ";
    cin >> newItem.quantity;

    while (newItem.quantity < 0) {
        cout << "Quantity cannot be negative. Enter quantity again: ";
        cin >> newItem.quantity;
    }

    cout << "Enter price: ";
    cin >> newItem.price;

    while (newItem.price < 0) {
        cout << "Price cannot be negative. Enter price again: ";
        cin >> newItem.price;
    }

    inventory.push_back(newItem);

    cout << "Item added successfully." << endl;
}

void searchItem(const vector<Item>& inventory) {
    string itemName;

    cout << "Enter item name to search: ";
    cin.ignore();
    getline(cin, itemName);

    int index = findItemIndex(inventory, itemName);

    if (index == -1) {
        cout << "Item not found." << endl;
    } else {
        cout << endl;
        cout << "Item found:" << endl;
        displayItem(inventory[index]);
    }
}

void updateQuantity(vector<Item>& inventory) {
    string itemName;

    cout << "Enter item name to update: ";
    cin.ignore();
    getline(cin, itemName);

    int index = findItemIndex(inventory, itemName);

    if (index == -1) {
        cout << "Item not found." << endl;
        return;
    }

    int newQuantity;

    cout << "Enter new quantity: ";
    cin >> newQuantity;

    while (newQuantity < 0) {
        cout << "Quantity cannot be negative. Enter quantity again: ";
        cin >> newQuantity;
    }

    inventory[index].quantity = newQuantity;

    cout << "Quantity updated successfully." << endl;
}

double calculateTotalInventoryValue(const vector<Item>& inventory) {
    double total = 0;

    for (const Item& item : inventory) {
        total += item.quantity * item.price;
    }

    return total;
}

void printMenu() {
    cout << endl;
    cout << "Simple Inventory System" << endl;
    cout << "-----------------------" << endl;
    cout << "1. Add item" << endl;
    cout << "2. Display inventory" << endl;
    cout << "3. Search item" << endl;
    cout << "4. Update quantity" << endl;
    cout << "5. Display total inventory value" << endl;
    cout << "6. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    vector<Item> inventory;
    int choice = 0;

    while (choice != 6) {
        printMenu();
        cin >> choice;

        if (choice == 1) {
            addItem(inventory);
        } else if (choice == 2) {
            displayInventory(inventory);
        } else if (choice == 3) {
            searchItem(inventory);
        } else if (choice == 4) {
            updateQuantity(inventory);
        } else if (choice == 5) {
            double totalValue = calculateTotalInventoryValue(inventory);
            cout << "Total inventory value: $" << totalValue << endl;
        } else if (choice == 6) {
            cout << "Exiting inventory system." << endl;
        } else {
            cout << "Invalid option. Please choose again." << endl;
        }
    }

    return 0;
}