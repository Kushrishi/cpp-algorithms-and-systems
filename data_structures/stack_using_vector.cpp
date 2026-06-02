#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> items;

public:
    void push(int value) {
        items.push_back(value);
    }

    void pop() {
        if (items.empty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }

        items.pop_back();
    }

    int top() {
        if (items.empty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }

        return items.back();
    }

    bool isEmpty() {
        return items.empty();
    }

    void display() {
        cout << "Stack from top to bottom: ";

        for (int i = items.size() - 1; i >= 0; i--) {
            cout << items[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.display();

    cout << "Top element: " << stack.top() << endl;

    stack.pop();

    stack.display();

    return 0;
}