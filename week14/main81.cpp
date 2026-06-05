#include <iostream>
#include <vector> //push_back(), pop_back(), size(), empty(), front(), back()....
using namespace std;

class MaxHeap {
    vector<int> heap;
    int parent(int i) {return (i-1)/2; }
    int leftchild(int i) {return 2*i +1; }
    int rightchild(int i) {return 2*i +2; }
    public:
        void insert(int v);
        void removeRoot();
        int top();
        void print();
};

int main(){
    
    return 0;
}

void MaxHeap::insert(int v){ //heapify-up
    heap.push_back(v);
    int i=heap.size() -1;
    while(i>0&&heap[i]>heap[parent(i)]){
        swap(heap[i],heap[parent(i)]);
        i = parent(i);
    }
}
void MaxHeap::removeRoot(){ //heapify-down
    if(heap.empty()) return;
    heap[0] = heap.back();
    heap.pop_back();
    int i = 0;
    while(true){
        int largest =i;
        int l = leftchild(i);
        int r = rightchild(i);

        if(i>0&&heap[largest]<heap[l]) largest = l;
        if(i>0&&heap[largest]<heap[r]) largest = r;
        if(largest==i) break;
        swap(heap[i],heap[largest]);
        i=largest;
    }
}
int MaxHeap::top(){
    if(heap.empty()) return -1;
    return heap[0];
}
void MaxHeap::print(){
    for(int v : heap) cout << v << " ";
    cout << endl;
}