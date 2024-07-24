#include <iostream>
using namespace std;

int main() {
    char operate, dot;
    int fPound, fShilling, fPence;
    int sPound, sShilling, sPence;
    float multiplier;

    cout << "Enter the operation (+, -, *): ";
    cin >> operate;

    cout << "Enter first amount (pounds shillings pence): ";
    cin >> fPound >> dot >> fShilling >> dot >> fPence;

    int rPound, rShilling, rPence;

    if (operate == '+' || operate == '-') {
        cout << "Enter second amount (pounds shillings pence): ";
        cin >> sPound >> dot >> sShilling >> dot >> sPence;

        if (operate == '+') {
            rPound = fPound + sPound;
            rShilling = fShilling + sShilling;
            rPence = fPence + sPence;
        } else {
            rPound = fPound - sPound;
            rShilling = fShilling - sShilling;
            rPence = fPence - sPence;
        }
    } else if (operate == '*') {
        cout << "Enter the multiplier: ";
        cin >> multiplier;

        int tPence = (fPound * 240 + fShilling * 12 + fPence) * multiplier;
        rPound = tPence / 240;
        rShilling = (tPence % 240) / 12;
        rPence = tPence % 12;
    } else {
        cout << "Invalid operation!" << endl;
        return 1;
    }

    if (rPence >= 12) {
        rShilling += rPence / 12;
        rPence %= 12;
    }
    if (rShilling >= 20) {
        rPound += rShilling / 20;
        rShilling %= 20;
    }

    if (rPence < 0) {
        rShilling -= 1 + (-rPence / 12);
        rPence = 12 - (-rPence % 12);
    }
    if (rShilling < 0) {
        rPound -= 1 + (-rShilling / 20);
        rShilling = 20 - (-rShilling % 20);
    }

    cout << "Result: " << rPound << " pounds, " << rShilling << " shillings, " << rPence << " pence" << endl;

    return 0;
}
