#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

void myfunction(string country = "Newzwaland")
{
    cout << country << endl;
}

int main()
{
 myfunction("Sweden");
    myfunction("Brazil");
    myfunction();
    myfunction("London");
    return 0;
}

