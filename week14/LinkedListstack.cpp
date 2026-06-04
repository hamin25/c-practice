#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* topNode;

public:
    Stack() {
        topNode = nullptr;
    }

    bool isEmpty() {
        return topNode == nullptr;
    }

    void push(int value) {
        Node* newNode = new Node(value);

        newNode->next = topNode;
        topNode = newNode;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }

        Node* temp = topNode;

        topNode = topNode->next;

        delete temp;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();

    cout << "Pop completed!" << endl;

    return 0;
}