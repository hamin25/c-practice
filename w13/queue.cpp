#include <iostream>
using namespace std;

class MyCircularQueue{
    int front;
    int rear;
    int maxsize;
    int count;
    int *list;

public:
    MyCircularQueue(int size) : count(0), front(-1), rear(-1) {
        if(size <= 0) size = 1;
        list = new int[size];
        maxsize = size;
    }

    ~MyCircularQueue(){
        delete [] list;
    }

    void dequeue();
    void enqueue(int v);
    bool isEmpty() const;
    bool isFull() const;
    int getFront() const;
    int getRear() const;
    void clear();
    void print() const;
    int getSize() const;
};

int main(){

    MyCircularQueue q(5);

    cout << "enqueue 10 20 30" << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.print();

    cout << endl;

    cout << "front : " << q.getFront() << endl;
    cout << "rear : " << q.getRear() << endl;

    cout << endl;

    cout << "dequeue" << endl;
    q.dequeue();

    q.print();

    cout << endl;

    cout << "enqueue 40 50 60" << endl;
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    q.print();

    cout << endl;

    cout << "size : " << q.getSize() << endl;

    return 0;
}

void MyCircularQueue::dequeue(){
    if(isEmpty()) return;

    front = (front + 1) % maxsize;
    count--;

    if(count == 0){
        front = rear = -1;
    }
}

void MyCircularQueue::enqueue(int v){
    if(isFull()) return;

    rear = (rear + 1) % maxsize;
    list[rear] = v;

    if(front == -1)
        front = 0;

    count++;
}

bool MyCircularQueue::isEmpty() const {
    return (count == 0);
}

bool MyCircularQueue::isFull() const {
    return (count == maxsize);
}

int MyCircularQueue::getFront() const{
    if(isEmpty()) return -1;

    return list[front];
}

int MyCircularQueue::getRear() const{
    if(isEmpty()) return -1;

    return list[rear];
}

void MyCircularQueue::clear(){
    front = rear = -1;
    count = 0;
}

void MyCircularQueue::print() const{

    if(isEmpty()){
        cout << "Queue is empty" << endl;
        return;
    }

    for(int i = 0; i < count; i++){
        int idx = (front + i) % maxsize;
        cout << list[idx] << " ";
    }

    cout << endl;
}

int MyCircularQueue::getSize() const{
    return count;
}