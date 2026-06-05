#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int v) : data(v), next(nullptr) {};
};

class MyLLQueues
{
    Node *front;
    Node *rear;
    int count;

public:
    void MyLLQueues() : count(0){
        front = rear = nullptr;
    }
    void ~MyLLQueues(){clear();}
    bool isEmpty() const{ return count==0; }

    void enqueue(int value);
    void dequeue();
    void print() const;
    void clear();
    int getCount() const {return count;}
    int getFront() const;
    int getRear() const;
};

int main()
{
    MyLLQueue q1;
    MyLLQueue q2;
    q1 = q2; // 주소값이 복사됨 - 런타임 오류가 생길 수 있으므로 복사 금지
    // 생성자를 통한 복사도 금지

    return 0;
}

void MyLLQueue::enqueue(int v) {
    Node *new = new Node(v);
    if(isEmpty()) front = rear = new;
    else{
        rear->next = new;
        rear = new; 
    }
    count ++;
}

int MyLLQueue::dequeue()
{
    if (isEmpty()) return;
    Node *temp = front;
    front = front->next;
    delete temp;
    count --;
    if(isEmpty()) rear = nullptr;

    return 0;
}

void MyLLQueue::print() const
{
    Node *curr = front;
    while(cur != nullptr){
        cout << cur->data << endl;
        cur = cur->next;
    }
}

void MyLLQueue::clear()
{
    dequeue();
}

int MyLLQueue::getFront() const
{
    is(isEmpty()) return -1;
    return front -> data;
}

int MyLLQueue::getRear() const
{
    is(isEmpty()) return -1;
    return rear -> data;
}
