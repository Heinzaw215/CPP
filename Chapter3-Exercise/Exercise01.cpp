#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int multi;
    int sum = 1;

    cout << "Enter the number: ";
    cin >> multi;

    for (int i = 1; i <= 20; i++) //1 2
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << setw(5) << multi * sum;
            sum++;
        }
        cout << endl;
    }
    return 0;
}
