#include <iostream>
using namespace std;

int main()
{
    int gallons;
    int cubicFoot;
    cout << "Enter the number of gallons: ";
    cin >> gallons;
    cubicFoot = gallons * 7.481;
    cout << "Equivalent in cubic foot: " << cubicFoot << endl;
    return 0;
}
