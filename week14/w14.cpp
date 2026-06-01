#include <iostream>
using namespace std;

class Stack
{
private:
    int *data;
    int top;
    int capacity;

public:
    Stack(int size)
    {
        capacity = size;
        data = new int[capacity];
        top = -1;
    }

    ~Stack()
    {
        delete[] data;
    }
    void push(int value)
    {
        if (top == capacity - 1)
        {
            cout << "Stack Full\n";
            return;
        }

        data[++top] = value;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Empty\n";
            return -1;
        }

        return data[top--];
    }
    void push(int value)
    {
        if (top == capacity - 1)
        {
            cout << "Stack Full\n";
            return;
        }

        data[++top] = value;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Empty\n";
            return -1;
        }

        return data[top--];
    }
    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == capacity - 1;
    }

    int peek()
    {
        if (isEmpty())
            return -1;
        return data[top];
    }
};

int main()
{
    Stack s(5);

    s.push(10);
    s.push(20);

    cout << s.pop() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
}