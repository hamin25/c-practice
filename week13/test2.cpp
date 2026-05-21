#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int frontIndex;
    int rearIndex;
    int capacity;

public:
    Queue(int size)
    {
        capacity = size;
        arr = new int[capacity];
        frontIndex = 0;
        rearIndex = 0;
    }
    void enqueue(int value)
    {
        arr[rearIndex] = value;
        rearIndex++;
    }
};

int main()
{
    Queue q(10);

    q.enqueue(1);
    q.enqueue(2);
    return 0;
}