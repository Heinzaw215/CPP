#include <iostream>
using namespace std;

// Function to convert hours, minutes, and seconds to total seconds
long hms_to_secs(int h, int m, int s);

int main()
{
    int hour, minute, second;  // Variables to store hours, minutes, and seconds
    char colon, choice;        // Variables to handle colon in input and user's choice to continue

    do
    {
        // Prompt the user to enter the time in the format hh:mm:ss
        cout << "Enter the time values (Format 12:59:59): ";
        cin >> hour >> colon >> minute >> colon >> second;

        // Call the function to convert time to seconds
        long result = hms_to_secs(hour, minute, second);

        // Display the result
        cout << "The equivalent time in seconds: " << result << endl;

        // Ask the user if they want to convert another time
        cout << "Do you want to convert another time (y/n)? ";
        cin >> choice;
    }
    while (choice == 'y' || choice == 'Y');  // Repeat if the user enters 'y' or 'Y'

    return 0;
}

// Function definition to convert hours, minutes, and seconds to total seconds
long hms_to_secs(int h, int m, int s)
{
    long ans = h * 3600 + m * 60 + s;  // Calculate total seconds
    return ans;                        // Return the result
}
