#include <iostream>
using namespace std;

int main()
{
    // Declaring the variables
    int fraction1Numerator, fraction1Denominator, fraction2Numerator, fraction2Denominator;
    char dummyChar;

    // Prompt user to enter fractions
    cout << "Enter first fraction: ";
    cin >> fraction1Numerator >> dummyChar >> fraction1Denominator;
    cout << "Enter second fraction: ";
    cin >> fraction2Numerator >> dummyChar >> fraction2Denominator;

    // Perform
    int sumNumerator   = fraction1Numerator * fraction2Denominator + fraction2Numerator * fraction1Denominator;
    int sumDenominator = fraction1Denominator * fraction2Denominator;

    // Give the answer to user
    cout << "Sum = " << sumNumerator << "/" << sumDenominator << endl;

    return 0;
}
