#include <iostream>
#include <queue>
using namespace std;

class Node{
public :
    int data;
    Node *right,*left;

    Node(int value){
        data=value;
        right = nullptr;
        left = nullptr;
    }
};

Node * makeTree(int *list, int size){
    if(size==0) return nullptr;
    queue<Node *> q;
    Node *root = new Node(list[0]);
    q.push(root);
    int i=1;
    while(i<size){
        Node *cur = q.front();
        q.pop();
        if(i<size){ // left child 
            cur->left = new Node(list[i]);
            q.push(cur->left);
            i++;
        }
        if(i<size){ // right child 
            cur->right = new Node(list[i]);
            q.push(cur->right);
            i++;
        } 
    }

    return root;
}
void clearTree(Node *root){
    if(root == nullptr) return;
    clearTree(root->left);
    clearTree(root->right);
    delete root;
}
void inorderPrint(Node *root){
    if(root == nullptr) return;
    inorderPrint(root->left);
    cout << root -> data << " ";
    inorderPrint(root->right);
}

void preorderPrint(Node *root){
    if(root == nullptr) return;
    cout << root -> data << " ";
    inorderPrint(root->left);
    inorderPrint(root->right);
}

int main(){
    int nodeSize=0;
    cin >> nodeSize;
    int* arr = new int[nodeSize];
    for(int i=0;i<nodeSize;i++){
        cin >> arr[i];
    }
    Node * root = makeTree(arr,nodeSize);
    inorderPrint(root);
    cout << endl;

    clearTree(root);
    delete[] arr;
    return 0;
}