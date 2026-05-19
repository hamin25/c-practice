#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout("data.txt");
    fout << "Hello" ;
    fout.close();

    ifstream fin("data.txt");
    string str;
    fin >> str;
    fin.close();
    return 0;
}