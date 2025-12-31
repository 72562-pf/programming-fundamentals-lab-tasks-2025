#include<iostream>
using namespace std;

double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);
double power(double);
void menu(void);

int main()
{
    double n1 = 0;
    double n2 = 0;

    double sum = 0;
    double minus = 0;
    double product = 0;
    double division = 0;
    double c = 0;
    int choice = 0;

    cout << "Name: Abdullah Abdul Jabbar\nSap Id: 72562\nLab Task #9" << endl;
    cout << "Enter two numbers:" << endl;  // User will enter 2 numbers
    cin >> n1 >> n2;

    menu();  // displays menu using function call  
    cout << "Now enter choice:" << endl;  // User will enter choice from menu  
    cin >> choice;

    switch (choice)  // switch statement is used to call the correct function based on the user choice
    {
        case 1:
            sum = add(n1, n2);
            cout << "Addition of " << n1 << "+" << n2 << " is=" << sum << endl;
            break;

        case 2:
            minus = sub(n1, n2);
            cout << "Subtraction of " << n1 << "-" << n2 << " is=" << minus << endl;
            break;

        case 3:
            product = mul(n1, n2);
            cout << "Multiplication of " << n1 << "*" << n2 << " is=" << product << endl;
            break;

        case 4:
            if (n2 == 0)   // Here I handled division of 0  
                cout << "Error number is 0 it is not divisible" << endl;
            else
            {
                division = div(n1, n2);
                cout << "Division of " << n1 << "/" << n2 << " is=" << division << endl;
            }
            break;

        case 5:
            c = power(n1);
            cout << "Power of " << n1 << " is=" << c << endl;
            break;

        default:
            cout << "Invalid Choice Entry Please Try Again" << endl;
    }

    return 0;
}

void menu(void)
{
    cout << "\n----------Arithmetic Operations----------\n";
    cout << "1. ADDITION (+)\n";
    cout << "2. SUBTRACTION (-)\n";
    cout << "3. MULTIPLICATION (*)\n";
    cout << "4. DIVISION (/)\n";
    cout << "5. POWER (p)\n";
    cout << "-------------------------------------------\n";
}

// Each operation is implemented in a specific function

double add(double n1, double n2)
{
    double x;
    x = n1 + n2;
    return x;
}

double sub(double n1, double n2)
{
    double x;
    x = n1 - n2;
    return x;
}

double mul(double n1, double n2)
{
    double x;
    x = n1 * n2;
    return x;
}

double div(double n1, double n2)
{
    double x;
    x = n1 / n2;
    return x;
}

double power(double n1)
{
    double x;
    x = n1 * n1;
    return x;
}

