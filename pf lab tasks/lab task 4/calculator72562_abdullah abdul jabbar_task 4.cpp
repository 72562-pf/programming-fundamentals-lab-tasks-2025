#include <iostream>
#include <cmath>   
using namespace std;
int main() {
    int choice;
    int a, b;
    float x, y;

    cout<<"CALCULATOR"<<endl;
    cout << "1. ADDITION "<<endl;
    cout << "2. SUBTRACTION"<<endl;
    cout << "3. MULTIPLICATION"<<endl;
    cout << "4. DIVISION"<<endl;
    cout << "5. Addition of two floating point numbers"<<endl;
    cout << "6. Subtraction of two floating point numbers"<<endl;
    cout << "7. Multiplication of two floating point numbers"<<endl;
    cout << "8. Division of two floating point numbers"<<endl;
    cout << "9. Sine" <<endl;
    cout << "10. Cosine"<<endl;
    cout << "11. Tangent"<<endl;
    cout << "12. Square Root"<<endl;
    cout << "13. Square"<<endl;
    cout << "14. Cube"<<endl;
    cout << "15. Exit"<<endl;

    cout <<"Enter your choice"<<endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter two integers";
            cin >> a >> b;
            cout << "Result = " << a + b << endl;
            break;

        case 2:
            cout << "Enter two integers";
            cin >> a >> b;
            cout << "Result = " << a - b << endl;
            break;

        case 3:
            cout << "Enter two integers";
            cin >> a >> b;
            cout << "Result = " << a * b << endl;
            break;

        case 4:
            cout << "Enter two integers";
            cin >> a >> b;
            if (b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;

        case 5:
            cout << "Enter two floating point numbers";
            cin >> x >> y;
            cout << "Result = " << x + y << endl;
            break;

        case 6:
            cout << "Enter two floating point numbers";
            cin >> x >> y;
            cout << "Result = " << x - y << endl;
            break;

        case 7:
            cout << "Enter two floating point numbers";
            cin >> x >> y;
            cout << "Result = " << x * y << endl;
            break;

        case 8:
            cout << "Enter two floating point numbers:";
            cin >> x >> y;
            if (y != 0)
                cout << "Result = " << x / y << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;

        case 9:
            cout << "Enter angle in radians";
            cin >> x;
            cout << "sin(" << x << ") = " << sin(x) << endl;
            break;

        case 10:
            cout << "Enter angle in radians";
            cin >> x;
            cout << "cos(" << x << ") = " << cos(x) << endl;
            break;

        case 11:
            cout << "Enter angle in radians";
            cin >> x;
            cout << "tan(" << x << ") = " << tan(x) << endl;
            break;

        case 12:
            cout << "Enter a number";
            cin >> x;
            if (x >= 0)
                cout << "Square root = " << sqrt(x) << endl;
            else
                cout << "Error: Negative number!" << endl;
            break;

        case 13:
            cout << "Enter a number";
            cin >> x;
            cout << "Square = " << x * x << endl;
            break;

        case 14:
            cout << "Enter a number";
            cin >> x;
            cout << "Cube = " << x * x * x << endl;
            break;

        case 15:
            cout << "Exit program..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
