#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
             cout << j + 1 << ' ';
        }
        cout << endl;
    }
    return 0;
}

/*
    Output:
    1 2 3 4 5
    2 3 4 5
    3 4 5
    4 5
    5
*/
