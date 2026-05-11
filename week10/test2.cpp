#include <iostream>
using namespace std;

int main(){
    struct goods{
        string name;
        int price;
        string company;
    }product1, product2;
    cin >> product1.name >> product1.price >> product1.company;
    cin >> product2.name >> product2.price >> product2.company;

    int equal =0;
    if(product1.name.compare(product2.name)==0) equal++;
    if(product1.price == product2.price) equal ++;
    if(product1.company.compare(product2.company)==0) equal++;

    if(equal == 3){
        cout << product1.name << " is equal" << endl;
    }
    else cout << product1.name << " is not equal" << endl;
    return 0;
}

