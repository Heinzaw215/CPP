#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i; // Multiplier
    int sum; // Variable to store the product
    int rows, cols; // Variables to store number of rows and columns
    cout << "Enter a multiplier: ";
    cin >> i;
    cout << "Number of rows: ";
    cin >> rows;
    cout << "Number of columns: ";
    cin >> cols;

    for (int row = 0; row < rows; row++) { // Loop for rows
        for (int col = 0; col < cols; col++) { // Loop for columns
            sum = i * (row * cols + col + 1); // Calculate the product
            cout << setw(4) << sum << " "; // Print the product with a width of 4 for alignment
        }
        cout << endl; // New line after each row
    }

    return 0;
}
