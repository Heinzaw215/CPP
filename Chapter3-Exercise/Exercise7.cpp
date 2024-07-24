#include <iostream>
using namespace std;

int main()
{
    int initialAmount, years;
    float rate;

    cout << "Enter initial amount: ";
    cin >> initialAmount;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Enter interest rate (percent per year): ";
    cin >> rate;

    float finalAmount = initialAmount;
    rate = rate / 100;

    for (int i = 1; i <= years; i++)
    {
        finalAmount += finalAmount * rate;
        cout << "Final amount is: " << finalAmount << endl;
    }
    cout << "At the end of " << years << " years,"
         << "you will have " << finalAmount << " dollars." << endl;
    return 0;
}
