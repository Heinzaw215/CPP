#include <iostream>
#include <iomanip> // Include the <iomanip> header for output formatting
using namespace std;

int main() {
    int dollar;
    float pound, franc, deuts, yen;

    // Prompt user to enter the amount in Dollars
    cout << "Enter the amount in Dollar: ";
    cin >> dollar;

    // Perform currency conversions
    pound = dollar * 1.487;
    franc = dollar * 0.172;
    deuts = dollar * 0.584;
    yen   = dollar * 0.00955;

    //Gives equivalent currencies to user
    cout << "Equivalent in British pound: "       << pound << " Pound"        << endl;
    cout << "Equivalent in French franc: "        << franc << " Franc"        << endl;
    cout << "Equivalent in German deutschemark: " << deuts << " Deutschemark" << endl;
    cout << "Equivalent in Japanese yen: "        << yen   << " Yen"          << endl;

    return 0;
}
