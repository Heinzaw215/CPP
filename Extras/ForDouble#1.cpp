#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
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
    A B
    A B C
    A B C D
    A B C D E
*/
