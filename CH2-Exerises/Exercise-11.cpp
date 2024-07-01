#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setiosflags(ios::left);
    cout << setw(15) << "Last name" << setw(15) << "First name" << setw(20) 
         << "Street Address" << setw(15)  << "Town" << setw(5)  << "State" << endl;
    cout << setfill('-') << setw(70) << "-" << endl;
    cout << setfill(' ') << setw(15) << "Jones" << setw(15) << "Bernard" << setw(20) 
         << "109 Pine Lane" << setw(15) << "Littletown" << setw(5) << "MI" << endl;
    cout << setw(15) << "O'Brian" << setw(15) << "Coleen" << setw(20) 
         << "42 E. 99th Ave." << setw(15) << "Bigcity" << setw(5) << "NY" << endl;
    cout << setw(15) << "Wong" << setw(15) << "Harry" << setw(20) 
         << "121-A Alabama St." << setw(15) << "Lakeville" << setw(5) << "IL" << endl;    
    return 0;
}