// #include<iostream>
// #include<stdio.h>
// #include<string>
// using namespace std;

// void myfunction() // declaration
// {
//     cout<<"I got executed!"<<endl; // defination
// }

// int main()
// {
//     myfunction();
//     return 0;
// }

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

void myfunction(); // declaration

    int main()
{
    myfunction();
    return 0;
}

void myfunction()
{
    cout << "I got executed!" << endl; // defination
}