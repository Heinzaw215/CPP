#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // setfill('.') function sets the fill character to a period ('.')
    cout << setw(14) << "Portcity" << setfill('.') << setw(12) << "2425785" << endl;
    return 0;
}