#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i;   // Multiplier
    int sum; // Variable to store the product

    for (int row = 0; row < 10; row++) {      // Loop for 3 rows
        for (int col = 1; col <= 5; col++) {  // Loop for 5 columns
            sum = i * (row * 5 + col);        // Calculate the product
            cout << setw(4) << sum << " ";    // Print the product with a width of 4 for alignment
        }
        cout << endl; // New line after each row
    }
    return 0;
}