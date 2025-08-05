#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

enum level
{
    low = 1,
    medium,
    high
};

int main()
{
    enum level myVar = medium;

    switch (myVar)
    {
    case 1:
        cout << "Low Level";
        break;
    case 2:
        cout << "Medium Level ";
        break;
    case 3:
        cout << "High Level ";
        break;
    }

    return 0;
}