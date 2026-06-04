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
};

int main() {
    Stack s;

    cout << "Stack created!" << endl;

    return 0;
}