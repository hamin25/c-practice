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

    cout << "\n===== Student List =====\n";

    for(int i=0; i<n; i++){

        cout << students[i].name
             << " : "
             << students[i].score
             << endl;
    }

    delete[] students;

    return 0;
}