#include <iostream>
using namespace std;

class MyCircularQueue{
    int front;
    int rear;
    int maxsize;
    int count;
    int *list;

    public :
        MyCircularQueue(int size) : front(-1), rear(-1), count(0) {
            if(size<=0) size=1;
            list = new int[size];
            maxsize = size;
        }
        ~MyCircularQueue(){};
        void dequeue();
        void enqueue(int v);
        bool isempty() const;
        bool isfull() const;
        int getfront() const;
        int getrear() const;
        void clear();
        void print() const;
        int getcount() const;
};



int main(){
    
    return 0;
}

void MyCircularQueue::dequeue(){
    if(isempty()) return;
    front = (front +1) % maxsize;
    count --;
}

void MyCircularQueue::enqueue(int v){
    if(isfull()) return;
    rear = (rear +1) % maxsize;
    list[rear] = v;
    if(front == -1) front =0;
    count ++;

}

bool MyCircularQueue::isempty() const {
    return (count==0);
}

bool MyCircularQueue::isfull() const {
    return (count==maxsize);
}

int MyCircularQueue::getfront() const{
    if(isempty()) return;
    return list[front];
}

int MyCircularQueue::getrear() const{
    if(isempty()) return;
    return list[rear];
}

void MyCircularQueue::clear()
{
    front = rear = -1;
    count = 0;
}

void MyCircularQueue::print() const{
    for(int i=0;i<count;i++){
        int idx = (front+i) % maxsize;
        cout << list[idx] << endl;
    }
}

int MyCircularQueue::getcount() const{
    return count;
}