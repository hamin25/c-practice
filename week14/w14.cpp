void push(int value){
    if(top == capacity-1){
        cout << "Stack Full\n";
        return;
    }

    data[++top] = value;
}

int pop(){
    if(top == -1){
        cout << "Stack Empty\n";
        return -1;
    }

    return data[top--];
}