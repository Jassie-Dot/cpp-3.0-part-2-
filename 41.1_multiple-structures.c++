#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

struct
{
    string brand;
    string model;
    int year;
} car1, car2, car3; /* We can add variables by separating
   with a comma here.*/

int main()
{
    // Put data into the first structure
    car1.brand = "BMW";
    car1.model = "X5";
    car1.year = 1999;

    // Put data into the second structure
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 1969;

    // Print the structure members

    cout<<car1.brand<<" "<<car1.model<<" "<<car1.year<<endl;
    cout<<car2.brand<<" "<<car2.model<<" "<<car2.year<<endl;
    
    return 0;
}