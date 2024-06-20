#include <iostream>
using namespace std;
int main()
{
    // Declaring variables
    float decpounds, decshilling, decpence;
    int pounds, shillings, pence;
    float decfrac;

    // Prompt user to enter numbers
    cout << "Enter decimal pounds: ";
    cin >> decpounds;

    // Perform currency conversion
    pounds = static_cast<int>(decpounds);
    decfrac = decpounds - pounds;
    decshilling = decfrac * 20;
    shillings = static_cast<int>(decshilling);
    decfrac = decshilling - shillings;
    decpence = decfrac * 12;
    pence = static_cast<int>(decpence); 

    // Give output to user
    cout << "Equivalent in old notaion: £" << pounds 
         << "." << shillings << "." << pence << endl;

    return 0;
}
