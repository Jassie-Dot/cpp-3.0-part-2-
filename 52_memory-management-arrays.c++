#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    int numGuests;
    cout << "How many guests? ";
    cin >> numGuests;
    // Check for invalid input.
    if (numGuests <= 0)
    {
        cout << "Number of guests must be at least 1." << endl;
    }
    // Create memory space for x guests(an array of string)
    string *guests = new string[numGuests];
    // Enter guests names
    for (int i = 0; i < numGuests; i++)
    {
        cout << "Enter name for guest " << (i + 1) << " : ";
        cin >> guests[i];
    }
    // Show all guests
    cout << "\n guests checked in:\n";
    for (int i = 0; i < numGuests; i++)
    {
        cout << guests[i] << "\n";
    }

    delete[] guests; // Clean up memory

    return 0;
}