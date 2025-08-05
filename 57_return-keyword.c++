/*
    the void keyword used in previous example indicates that
    the function should not return a value. If you want the function
    should return the value you can use data type such as int string
    instead of void and use the return keyword inside the function.
*/
// #include<iostream>
// #include<stdio.h>
// #include<string>
// using namespace std;

// int function(int x)
// {
//     return 5+x;
// }

// int main()
// {
//     cout<<function(3);

//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;
// int function(int x, int y)
// {
//     return x + y;
// }
// int main()
// {
//     cout << function(5, 3);
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
int function(int x, int y)
{
    return x + y;
}
int main()
{
    int z = function(5, 3);
    cout << z;

    return 0;
}