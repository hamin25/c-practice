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

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }

        cout << "Top : " << topNode->data << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }

        Node* current = topNode;

        cout << "Stack : ";

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    s.peek();

    return 0;
}