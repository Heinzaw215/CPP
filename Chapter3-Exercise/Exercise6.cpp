#include <iostream>
using namespace std;
int main()
{
    unsigned int numb;

    do
    {
        cout << "Enter the number: ";
        cin >> numb;

        if (numb == 0)
        {
            break;
        }

        unsigned long fact = 1;
        for (unsigned int j = 1; j <= numb; j++)
        {
            fact *= j;
        }

        cout << numb << " factorial is " << fact << endl;
    } while (numb != 0);
    cout << "The program is terminated. " << endl;
    return 0;
}
