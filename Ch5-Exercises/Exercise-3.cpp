#include <iostream>
using namespace std;

// Function to set the smaller of two numbers to 0
// Takes two integers by reference
void zeroSmaller(int& n1, int& n2);

int main()
{
    int num1, num2;

    // Prompt the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call zeroSmaller() to modify the smaller number
    zeroSmaller(num1, num2);

    // Output the modified values of num1 and num2
    cout << "The modified values: " << num1 << " " << num2 << endl;

    return 0;  // End of program
}

// Function definition
// Takes two integers by reference and sets the smaller one to 0
void zeroSmaller(int& n1, int& n2)
{
    // If the first number is greater than the second
    if (n1 > n2)
    {
        n2 = 0;  // Set the smaller value (n2) to 0
    }
    else
    {
        n1 = 0;  // Set the smaller value (n1) to 0
    }
}

