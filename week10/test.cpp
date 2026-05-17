#include <iostream>
using namespace std;

int main(){
    int a=0;
    cin >> a;
    cout << a << endl;
    int* arr = new int[5];
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    delete[] arr;
    return 0;
}