#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char operation;
    int pounds1, shillings1, pence1;
    int pounds2, shillings2, pence2;
    float multiplier;

    cout << "Enter the operation (+, -, *): ";
    cin >> operation;

    cout << "Enter first amount (pounds shillings pence): ";
    cin >> pounds1 >> shillings1 >> pence1;

    int resultPounds, resultShillings, resultPence;

    if (operation == '+' || operation == '-') {
        cout << "Enter second amount (pounds shillings pence): ";
        cin >> pounds2 >> shillings2 >> pence2;

        if (operation == '+') {
            resultPounds = pounds1 + pounds2;
            resultShillings = shillings1 + shillings2;
            resultPence = pence1 + pence2;
        } else {
            resultPounds = pounds1 - pounds2;
            resultShillings = shillings1 - shillings2;
            resultPence = pence1 - pence2;
        }
    } else if (operation == '*') {
        cout << "Enter the multiplier: ";
        cin >> multiplier;

        int totalPence = (pounds1 * 240 + shillings1 * 12 + pence1) * multiplier;
        resultPounds = totalPence / 240;
        resultShillings = (totalPence % 240) / 12;
        resultPence = totalPence % 12;
    } else {
        cout << "Invalid operation!" << endl;
        return 1;
    }

    if (resultPence >= 12) {
        resultShillings += resultPence / 12;
        resultPence %= 12;
    }
    if (resultShillings >= 20) {
        resultPounds += resultShillings / 20;
        resultShillings %= 20;
    }

    if (resultPence < 0) {
        resultShillings -= 1 + (-resultPence / 12);
        resultPence = 12 - (-resultPence % 12);
    }
    if (resultShillings < 0) {
        resultPounds -= 1 + (-resultShillings / 20);
        resultShillings = 20 - (-resultShillings % 20);
    }

    cout << "Result: " << resultPounds << " pounds, " << resultShillings << " shillings, " << resultPence << " pence" << endl;

    return 0;
}
