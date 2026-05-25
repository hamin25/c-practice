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

    for(int i=0; i<n; i++){

        cout << "\nStudent " << i + 1 << endl;

        cout << "Name : ";
        cin >> students[i].name;

        cout << "Score : ";
        cin >> students[i].score;
    }

    delete[] students;

    return 0;
}