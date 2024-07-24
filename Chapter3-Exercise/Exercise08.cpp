#include <iostream>
using namespace std;

int main()
{
    // f = first, s = second, t = total
    int fPound, fShilling, fPence;
    int sPound, sShilling, sPence;
    int tPound, tShilling, tPence;
    char respond, dummychar;

    do {
        cout << "Enter the first amount (Pound.Shilling.Pence): " << '\x9c';
        cin >> fPound >> dummychar >> fShilling >> dummychar >> fPence;
        cout << "Enter the second amount (Pound.Shilling.Pence): " << '\x9c';
        cin >> sPound >> dummychar >> sShilling >> dummychar >> sPence;

        tPence = fPence + sPence;
        tShilling = fShilling + sShilling;
        tPound = fPound + sPound;

        if (tPence >= 12)
        {
            tPence -= 12;
            tShilling += 1;
        }

        if (tShilling >= 20)
        {
            tShilling -= 20;
            tPound += 1;
        }

        cout << "Total = \x9c" << tPound << "." << tShilling << "." << tPence << endl;

        cout << "Do you wish to continue? (y | n): ";
        cin >> respond;
    } while (respond == 'y');
    return 0;
}
