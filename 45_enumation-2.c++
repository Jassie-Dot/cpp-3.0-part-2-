#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
enum level{
    low,
    medium,
    high
};
int main()
{
    enum level{
        low=5,
        medium,
        high
    };
    cout<<"The low value is "<<endl;
    cout<<low; cout<<endl;
    cout<<"The medium value is "<<endl;
    cout<<medium; cout<<endl;
    cout<<"The high value is "<<endl;
    cout<<high<<endl;

    return 0;
}