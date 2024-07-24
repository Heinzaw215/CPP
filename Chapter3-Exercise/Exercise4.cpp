#include <iostream>
using namespace std;

int main()
{
    float numb1, numb2, result;
    char operate;
    char respond;

    do
    {
        cout << "Enter the first number, operator, second number: ";
        cin >> numb1 >> operate >> numb2;

        switch (operate)
        {
        case '+':
            result = numb1 + numb2;
            cout << "The result: " << result << endl;
            break;

        case '-':
            result = numb1 - numb2;
            cout << "The result: " << result << endl;
            break;

        case '*':
            result = numb1 * numb2;
            cout << "The result: " << result << endl;
            break;

        case '/':
            result = numb1 / numb2;
            cout << "The result: " << result << endl;
            break;

        default:
            cout << "Invalid operation" << endl;
        }
        cout << "Do another? (y / n) ";
        cin >> respond;

    } while (respond != 'n');
    return 0;
}
