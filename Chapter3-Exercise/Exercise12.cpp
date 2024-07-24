#include <iostream>
using namespace std;

int main()
{
    int frac1N, frac1D, frac2N, frac2D;
    char dummychar, operate;
    char respond;

    do {
        cout << "Enter the first fraction: ";
        cin >> frac1N >> dummychar >> frac1D;
        cout << "Enter the operator: ";
        cin >> operate;
        cout << "Enter the second fraction: ";
        cin >> frac2N >> dummychar >> frac2D;

        int resultN, resultD;

        switch (operate)
        {
        case '+':
            resultN = frac1N * frac2D + frac1D * frac2N;
            resultD = frac1D * frac2D;
            break;

        case '-':
            resultN = frac1N * frac2D - frac1D * frac2N;
            resultD = frac1D + frac2D;
            break;

        case '*':
            resultN = frac1N * frac2N;
            resultD = frac1D * frac2D;
            break;

        case '/':
            resultN = frac1N * frac2D;
            resultD = frac2N * frac1D;
            break;

        default:
            cout << "Invalid operation.";
            continue;
        }
        cout << resultN << "/" << resultD << endl;
        cout << resultN / resultD << endl;
        cout << "Do you want to try again? (y|n): ";
        cin >> respond;
    } while (respond != 'n');
    return 0;
}
