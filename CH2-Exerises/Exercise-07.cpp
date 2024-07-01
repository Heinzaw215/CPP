#include <iostream>
using namespace std;

int main()
{
    // Declaring the variables that are used in the main program 
    float celsius, fahrenheit;

    // Prompt user to enter Celsius temperature
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit 
    fahrenheit = celsius * 9 / 5 + 32;

    // Display the equivalent Fahrenheit temperature
    cout << "Equivalent in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
