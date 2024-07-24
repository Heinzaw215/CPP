#include <iostream>
using namespace std;

int main() {
    double principal, rate, finalAmount;
    int years = 0;

    cout << "Enter the initial investment amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> rate;
    cout << "Enter the desired final amount: ";
    cin >> finalAmount;

    // Convert percentage rate to a decimal
    rate = rate / 100;

    double currentAmount = principal;

    // Loop until the current amount reaches or exceeds the final amount
    while (currentAmount < finalAmount) {
        currentAmount += currentAmount * rate;
        years++;
    }

    cout << "It will take " << years << " years to reach the desired amount of " << finalAmount << "." << endl;

    return 0;
}
