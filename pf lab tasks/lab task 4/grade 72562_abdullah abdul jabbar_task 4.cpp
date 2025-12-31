#include <iostream>
using namespace std;

int main() 
{
    cout << "NAME:abdullah abdul jabbar" << endl;
    cout << "SAP_ID: 72562" << endl;

    int score;
    char grade;

    cout << "Enter your test score: ";
    cin >> score;

    if (score >= 90) {
        cout << "grade: A" << endl;
    }
    else if (score >= 80) {
        cout << "grade: B" << endl;
    }
    else if (score >= 70) {
        cout << "grade: C" << endl;
    }
    else if (score >= 60) {
        cout << "grade: D" << endl;
    }
    else {
        cout << "grade: F" << endl;
    }

    return 0;
}
