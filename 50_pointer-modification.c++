#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    string food="Pizza";
    string* ptr=&food;

    cout<<food<<endl;
    cout<<&food<<endl;
    cout<<*ptr<<endl; cout<<endl;

    *ptr="Hamburger";
    cout<< *ptr<<endl;
    cout<<food<<endl;
    cout<<&food;

    return 0;
}