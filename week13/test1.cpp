#include <iostream>
using namespace std;


class Stack {
private:
    int arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        arr[++top] = value;
    }

    void pop() {
        if (top >= 0)
            top--;
    }

    void print() {
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    bool isEmpty() {
        return top == -1;
    }

    int peek() {
        if (top >= 0)
            return arr[top];
        return -1;
    }
    void push(int value) {
        if (top >= 99) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
    }
};

int main() {
    Stack s;

    if (s.isEmpty()) cout << "Stack is empty" << endl;
    else cout << "Stack is not empty" << endl;

    cout << "Top: " << s.peek() << endl;

    s.push(10);
    s.push(20);
    s.push(30);

    s.print();

    s.pop();

    s.print();

    return 0;
}