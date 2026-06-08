#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Create three nodes on the heap.
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;

    // Set up the first node.
    first->data = 10;
    first->next = second;

    // Set up the second node.
    second->data = 20;
    second->next = third;

    // Set up the third node.
    third->data = 30;
    third->next = nullptr;

    cout << "Linked nodes:" << endl;

    // Start at the first node.
    Node* current = first;

    // Traverse the linked nodes until current points to nothing.
    while (current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }

    // Clean up the heap memory.
    delete first;
    delete second;
    delete third;

    first = nullptr;
    second = nullptr;
    third = nullptr;
    current = nullptr;

    cout << endl;
    cout << "Nodes cleaned up." << endl;

    return 0;
}