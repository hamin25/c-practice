#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout("data.txt");
    fout << "Hello" ;
    fout.close();

    

    return 0;
}