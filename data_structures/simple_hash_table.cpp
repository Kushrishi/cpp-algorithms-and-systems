#include <iostream>
#include <vector>
#include <list>
using namespace std;

class HashTable {
private:
    static const int TABLE_SIZE = 10;
    vector<list<int>> table;

    int hashFunction(int key) {
        return key % TABLE_SIZE;
    }

public:
    HashTable() {
        table.resize(TABLE_SIZE);
    }

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    bool search(int key) {
        int index = hashFunction(key);

        for (int value : table[index]) {
            if (value == key) {
                return true;
            }
        }

        return false;
    }

    void remove(int key) {
        int index = hashFunction(key);
        table[index].remove(key);
    }

    void display() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";

            for (int value : table[i]) {
                cout << value << " -> ";
            }

            cout << "NULL" << endl;
        }
    }
};

int main() {
    HashTable hashTable;

    hashTable.insert(15);
    hashTable.insert(25);
    hashTable.insert(35);
    hashTable.insert(10);
    hashTable.insert(20);

    cout << "Hash table contents:" << endl;
    hashTable.display();

    int target = 25;

    if (hashTable.search(target)) {
        cout << target << " was found in the hash table." << endl;
    } else {
        cout << target << " was not found in the hash table." << endl;
    }

    hashTable.remove(25);

    cout << "After removing 25:" << endl;
    hashTable.display();

    return 0;
}