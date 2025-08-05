#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
struct car // This structure is now named "car"
{
    string brand;
    string model;
    int year;
};

int main()
{
    // Create a car structure and store it in car1.

    car car1;
    car1.brand = "BMW";
    car1.model = "X5";
    car1.year=1999;

    // Create another car structure and store it in myCar2;

    car car2;
    car2.brand="Ford";
    car2.model="Mustang";
    car2.year=1969;

    // Printing the structure members

    cout<<car1.brand<<" "<<car1.model<<" "<<car1.year<<endl;
    cout<<car2.brand<<" "<<car2.model<<" "<<car2.year<<endl;

    return 0;
}