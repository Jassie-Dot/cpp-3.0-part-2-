#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    // Creating the memory manually
    int* ptr= new int;
    *ptr=35;
    cout<<"The value of integer is :";
    cout<<*ptr<<endl;
    cout<<"The address of integer is : "<<&*ptr;
    // deleting memory when we are done.
    delete ptr;

    return 0;
}
