#include <iostream>
#include <vector>
using namespace std;

class Queue {
private:
    vector<int> items;

public:
    void enqueue(int value) {
        items.push_back(value);
    }

    void dequeue() {
        if (items.empty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        items.erase(items.begin());
    }

    int front() {
        if (items.empty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }

        return items.front();
    }

    bool isEmpty() {
        return items.empty();
    }

    void display() {
        cout << "Queue from front to back: ";

        for (int value : items) {
            cout << value << " ";
        }

        cout << endl;
    }
};

int main() {
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    queue.display();

    cout << "Front element: " << queue.front() << endl;

    queue.dequeue();

    queue.display();

    return 0;
}