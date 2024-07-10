#include <iostream>
using namespace std;

int main()
{
    // Declaring variables
    int row;
    char letter;

    // Making user input
    cout << "Numbers of rows:";
    cin >> row;
    cout << "Enter a alphabet:";
    cin >> letter;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(letter + j) << ' ';
        }
        cout << endl;
    }
    return 0;
}
