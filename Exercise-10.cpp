#include <iostream>
using namespace std;

int main()
{
    // Declaring variables
    int pounds, shilings, pence;
    double decimalPound;

    // Prompt user to enter numbers
    cout << "Enter pounds: ";
    cin  >> pounds;
    cout << "Enter shilings: ";
    cin  >> shilings;
    cout << "Enter pence: ";
    cin  >> pence;

    // Perform currency conversion
    decimalPound = pounds + (shilings * 12 + pence) / 240.0;

    // Give output to user
    cout << "Decimal pound: £" << decimalPound;

    return 0;
}
