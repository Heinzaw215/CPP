#include <iostream>
using namespace std;

int main() {
    int guests, chairs;
    cout << "Enter the number of guests: ";
    cin >> guests;
    cout << "Enter the number of chairs: ";
    cin >> chairs;

    if (chairs > guests) {
        cout << "Number of chairs cannot be more than the number of guests." << endl;
        return 1; // Exit the program if input is invalid
    }

    int arrangements = 1;
    for (int i = 0; i < chairs; ++i) {
        arrangements *= (guests - i);
    }

    cout << "The number of possible arrangements is: " << arrangements << endl;
    return 0;
}

