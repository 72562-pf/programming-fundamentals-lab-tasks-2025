#include <iostream>
using namespace std;

int main()
{
    int salaries[6];

    cout << "Without Loop\n";

    cout << "Enter salaries of 6 employees:\n";

    cin >> salaries[0];
    cin >> salaries[1];
    cin >> salaries[2];
    cin >> salaries[3];
    cin >> salaries[4];
    cin >> salaries[5];

    cout << "First person salary is: " << salaries[0] << endl;
    cout << "Second person salary is: " << salaries[1] << endl;
    cout << "Third person salary is: " << salaries[2] << endl;
    cout << "Fourth person salary is: " << salaries[3] << endl;
    cout << "Fifth person salary is: " << salaries[4] << endl;
    cout << "Sixth person salary is: " << salaries[5] << endl;

    cout << "\nWith Loop" << endl;

    cout << "Enter the salaries of 6 employees:\n";

    for (int i = 0; i < 6; i++)
    {
        cin >> salaries[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << "Salary of " << i + 1 << " person is: " << salaries[i] << endl;
    }

    return 0;
}

