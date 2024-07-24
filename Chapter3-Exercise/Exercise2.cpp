#include <iostream>
using namespace std;

int main()
{
    // Declaring variables
    float ctemp, ftemp;
    int option;

    // Taking user input
    cout << "Type 1 to convert Fahrenheit to Celsius, " << endl
         << "Type 2 to convert Celsius to Fahrenheit: ";
    cin >> option;

    //
    switch (option)
    {
        case 1:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> ftemp;
            ctemp = (5.0 / 9.0) * (ftemp - 32);
            cout << "Equal temperature in Celsius: " << ctemp;
            break;

        case 2:
            cout << "Enter temperature in Celsius: ";
            cin >> ctemp;
            ftemp = (ctemp * 9.0 / 5.0) + 32;
            cout << "Equal Temperature in Fahrenheit: " << ftemp;
            break;

        default:
            cout << "Invalid option" << endl;
            break;
    }
    return 0;
}
