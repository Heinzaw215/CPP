#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int numb = 1;
    unsigned long fact = 1;
    for (int j = numb; j <= 20; j++) // Making 20 columns    
    {
        fact *= j;
        cout << "!" << j << " = " 
             << fact << endl;
    }
    return 0;
}
