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
};

int main(){
    
    return 0;
}