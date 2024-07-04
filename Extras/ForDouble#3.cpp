#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
             cout << char('a' + i) << ' ';
        }
        cout << endl;
    }
    return 0;
}

/*
    Output:
    a
    b b
    c c c
    d d d d
    e e e e e
*/
