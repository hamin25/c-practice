#include <iostream>
using namespace std;

// Node - 값(int), 포인터
class Node
{
public:
    int data;
    Node *next;
    Node(int v)
    {
        data = v;
        next = nullptr;
    };
};

// linked list stack - MyLinkedStack, 멤버 변수, 멤버 메소드
class MyLinkedStack
{
    // 멤버 변수 : 스택 탑, 사이즈, 동적할당
    // 멤버 메소드 : 비었는지, 다 찼는지, push, pop, 스택 할당, 스택 삭제
    /*public :

        bool isEmpty();
        bool isFull();
        void push(int value);
        int pop();
    */

    Node *top;

public:
    MyLinkedStack() : top(nullptr) {}
    ~MyLinkedStack() {clear();}
    void push(const int &v);
    void pop();
    bool isEmpty() const;
    int peak() const;
    void clear();
    void printall() const;
    int getcnt() const;
};

int main()
{

    return 0;
}

void MyLinkedStack::push(const int &v){
    Node * newnode = new Node(v);
    newnode->next = top;
    top = newnode;
}  
void MyLinkedStack::pop(){   
    Node *tempnode = top;
    top = tempnode -> next;
    delete tempnode;
}
bool MyLinkedStack::isEmpty() const{
    return top==nullptr;
}
int MyLinkedStack::peak() const{
    if(isEmpty()) return -1;
    return top->data;
}
void MyLinkedStack::clear(){
    while(!isEmpty()){
        pop();
    }
}
void MyLinkedStack::printall() const{
    Node *tempnode = top;
    while(true){
        if(tempnode == nullptr) break;
        cout << tempnode->data << endl;
        tempnode = tempnode->next;
    }
}
int MyLinkedStack:: getcnt() const{
    Node *tempnode = top;
    int count =0;
    while(true){
        if(tempnode == nullptr) break;
        count ++;
        tempnode = tempnode->next;
    }
    return 0;
}