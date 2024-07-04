#include <iostream>
using namespace std;

int main()
{
    char letter = 'a';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
             cout << letter << ' ';
             letter++;
        }
        cout << endl;
    }
    return 0;
}

/*
    Output:
    a
    b c
    d e f
    g h i j
    k l m n o
*/
