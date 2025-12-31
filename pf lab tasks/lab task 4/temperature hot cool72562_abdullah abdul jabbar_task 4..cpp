#include <iostream>
using namespace std;
int main() 
{
	cout<<"NAME:Abdullah abdul jabbar"<<endl;
	cout<<"SAP_ID:72562"<<endl;
    float temperature;

    cout << "Enter the temperature";
    cin >> temp;

    if (temp > 35) {
        cout << "It is a hot day"<<endl;
    }
    else if (temp >= 25 && temp <= 35) {
        cout << "It is a pleasant day." << endl;
    }
    else {
        cout << "It is a cool day"<<endl;
    }

    return 0;
}
