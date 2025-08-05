/*
    A pointer however, is a variable that stores the memory 
    address as its value.
*/
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    string food="Pizza"; // A food variable of type string
    string* ptr=&food; // A pointer variable, with the name ptr,that stores the address of food
    cout<<food<<endl;
    cout<<&food<<endl;
    cout<<ptr<<endl;

    return 0;
}