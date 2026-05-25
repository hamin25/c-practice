#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int score;
};

int main(){

    int n;

    cout << "Number of students : ";
    cin >> n;

    Student* students = new Student[n];

    cout << "Array created." << endl;

    delete[] students;

    return 0;
}