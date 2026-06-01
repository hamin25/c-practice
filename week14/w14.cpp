#include <iostream>
using namespace std;

class Stack{
private:
    int *data;
    int top;
    int capacity;

public:
    Stack(int size){
        capacity = size;
        data = new int[capacity];
        top = -1;
    }

    ~Stack(){
        delete[] data;
    }
};

int main(){
    Stack s(5);
}