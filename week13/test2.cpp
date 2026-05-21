#include <iostream>
using namespace std;


class Queue {
private:
    int* arr;
    int frontIndex;
    int rearIndex;
    int capacity;

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        frontIndex = 0;
        rearIndex = 0;
    }
};


int main(){
    
    return 0;
}