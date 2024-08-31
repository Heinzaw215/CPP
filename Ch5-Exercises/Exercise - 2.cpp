#include <iostream>
using namespace std;

// Function declaration with a default argument for 'p'
double power(double n, int p = 2);

int main()
{
    double number;    // Variable to hold the base number
    int exponent;     // Variable to hold the exponent

    // Prompt the user to enter the base number
    cout << "Enter the number: ";
    cin >> number;

    // Prompt the user to enter the exponent (optional, with a default value of 2)
    cout << "Enter the power (Optional, Default = 2): ";

    // If the user input for exponent is invalid or not provided, default to 2
    if (!(cin >> exponent))
    {
        exponent = 2;
    }

    // Call the power function to calculate the result
    double result = power(number, exponent);

    // Display the result to the user
    cout << number << " raised to the power of " << exponent << " is " << result << endl;

    return 0;   // End of the program
}

// Function definition to calculate 'n' raised to the power 'p'
double power(double n, int p)
{
    double result = 1.0;  // Initialize result to 1

    // Loop to multiply 'n' by itself 'p' times
    for (int i = 0; i < p; i++)
    {
        result *= n;
    }

    // Return the final calculated result
    return result;
}
