#include <iostream>
using namespace std;

class MyCirucularQueue{
    int front;
    int rear;
    int size;
    int count;
    int *list;
    public:
        MyCirucularQueue(){};
        ~MyCirucularQueue(){};
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

    return 0;
}