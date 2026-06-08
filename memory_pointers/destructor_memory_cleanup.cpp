#include <iostream>
using namespace std;

class SimpleList {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* head;

public:
    SimpleList() {
        head = nullptr;
        cout << "SimpleList created." << endl;
    }

    ~SimpleList() {
        cout << "Destructor called. Cleaning up nodes..." << endl;

        Node* current = head;

        while (current != nullptr) {
            // Save the next node before deleting the current node.
            Node* nextNode = current->next;

            cout << "Deleting node with data: " << current->data << endl;

            delete current;

            current = nextNode;
        }

        head = nullptr;

        cout << "Cleanup complete." << endl;
    }

    void addToFront(int value) {
        Node* newNode = new Node;

        newNode->data = value;
        newNode->next = head;

        head = newNode;
    }

    void printList() const {
        Node* current = head;

        cout << "List values:" << endl;

        while (current != nullptr) {
            cout << current->data << endl;
            current = current->next;
        }
    }
};

int main() {
    SimpleList list;

    list.addToFront(30);
    list.addToFront(20);
    list.addToFront(10);

    list.printList();

    cout << endl;
    cout << "End of main is approaching." << endl;

    return 0;
}