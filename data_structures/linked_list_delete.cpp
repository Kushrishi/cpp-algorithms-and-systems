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

void deleteValue(Node*& head, int value) {
    if (head == nullptr) {
        return;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;

    while (current->next != nullptr && current->next->data != value) {
        current = current->next;
    }

    if (current->next == nullptr) {
        cout << value << " was not found in the list." << endl;
        return;
    }

    Node* temp = current->next;
    current->next = current->next->next;
    delete temp;
}

void printList(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
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
    insertAtEnd(head, 40);

    cout << "Original list: ";
    printList(head);

    deleteValue(head, 30);

    cout << "After deleting 30: ";
    printList(head);

    deleteValue(head, 10);

    cout << "After deleting 10: ";
    printList(head);

    deleteList(head);

    return 0;
}