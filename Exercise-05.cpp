#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    int result = islower(ch);
    cout << result;
    return 0;
}
