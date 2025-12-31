#include <iostream>
using namespace std;

int main() 
{
    int choice;
    int totalSeconds, hours, minutes, seconds;

    cout << " Time Conversion Menu " << endl;
    cout << "1. Convert seconds to hours, minutes, and seconds" << endl;
    cout << "2. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter total seconds: ";
            cin >> totalSeconds;

            
            hours = totalSeconds / 3600;          
            totalSeconds = totalSeconds % 3600;   

            minutes = totalSeconds / 60;         
            seconds = totalSeconds % 60;          

            cout << hours << " hrs " << minutes << " mins " << seconds << " secs" << endl;
            break;

        case 2:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice!" <<endl;
        }
        return 0;
    }
