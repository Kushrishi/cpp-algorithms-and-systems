#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

bool search(Node* head, int target) {
    Node* current = head;

    while (current != nullptr) {
        if (current->data == target) {
            return true;
        }

        current = current->next;
    }

    return false;
}

void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    int target = 20;

    if (search(head, target)) {
        cout << target << " was found in the linked list." << endl;
    } else {
        cout << target << " was not found in the linked list." << endl;
    }

    target = 50;

    if (search(head, target)) {
        cout << target << " was found in the linked list." << endl;
    } else {
        cout << target << " was not found in the linked list." << endl;
    }

    deleteList(head);

    return 0;
}