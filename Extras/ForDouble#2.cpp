#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j >= 0; j--)
        {
             cout << char('A' + j) << ' ';
        }
        cout << endl;
    }
    return 0;
}

/*
    Output:
    A
    B A
    C B A
    D C B A
    E D C B A
*/
