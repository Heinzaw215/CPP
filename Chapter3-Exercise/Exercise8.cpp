#include <iostream>
using namespace std;

int main()
{
    /*
    1 pound = 20 shilling
    1 shilling = 12 pence;
    */

    // f = first, s = second, t = total
    int fPound, fShilling, fPence;
    int sPound, sShilling, sPence;
    int tPound, tShilling, tPence;
    char respond = 'y';
    char dummychar;

    do {
        cout << "Enter the first amount: " << '\x9c';
        cin >> fPound >> dummychar >> fShilling >> dummychar >> fPence;
        cout << "Enter the second amount: " << '\x9c';
        cin >> sPound >> dummychar >> sShilling >> dummychar >> sPence;

        tPence = fPence + sPence;
        tShilling = fShilling + sShilling;
        tPound = fPound + sPound;

        if (tPence > 11)
        {
            tPence -= 12;
            tShilling += 1;
        }

        if (tShilling > 19)
        {
            tShilling -= 20;
            tPound += 1;
        }

        cout << "Total = \x9c" << tPound << "." << tShilling << "." << tPence << endl;

        cout << "Do you wish to continue (y|n): ";
        cin >> respond;
    } while (respond != 'n');
    return 0;
}
