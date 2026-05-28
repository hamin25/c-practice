#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree{
private:
    Node* root;

    Node* insert(Node* node, int value){
        if(node == nullptr){
            return new Node(value);
        }

        if(value < node->data){
            node->left = insert(node->left, value);
        }
        else{
            node->right = insert(node->right, value);
        }

        return node;
    }

    void inorder(Node* node){
        if(node == nullptr){
            return;
        }

        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

public:
    BinaryTree(){
        root = nullptr;
    }

    void insert(int value){
        root = insert(root, value);
    }

    void printInorder(){
        inorder(root);
        cout << endl;
    }
};

int main(){

    BinaryTree tree;

    tree.insert(10);
    tree.insert(5);
    tree.insert(20);
    tree.insert(3);
    tree.insert(7);

    tree.printInorder();

    return 0;
}