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

    void preorder(Node* node){
        if(node == nullptr){
            return;
        }

        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    bool search(Node* node, int target){
        if(node == nullptr){
            return false;
        }

        if(node->data == target){
            return true;
        }

        if(target < node->data){
            return search(node->left, target);
        }

        return search(node->right, target);
    }

    void clear(Node* node){
        if(node == nullptr){
            return;
        }

        clear(node->left);
        clear(node->right);

        delete node;
    }

public:
    BinaryTree(){
        root = nullptr;
    }

    ~BinaryTree(){
        clear(root);
    }

    void insert(int value){
        root = insert(root, value);
    }

    void printInorder(){
        cout << "Inorder : ";
        inorder(root);
        cout << endl;
    }

    void printPreorder(){
        cout << "Preorder : ";
        preorder(root);
        cout << endl;
    }

    void searchValue(int target){
        if(search(root, target)){
            cout << target << " found" << endl;
        }
        else{
            cout << target << " not found" << endl;
        }
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
    tree.printPreorder();

    tree.searchValue(7);

    return 0;
}