#include <iostream>
using namespace std;

int main(){
    int n=0;
    cin >> n;
    int* num = (int*)malloc(sizeof(int)*n);
    cin >> num[0];
    int max = num[0];
    int sum = num[0];
    for(int i=1;i<n;i++){
        cin >> num[i];
        if(num[i]>max) max = num[i];
        sum += num[i];
    }
    cout << sum << " " << max << endl;
    free(num);
    return 0;
}