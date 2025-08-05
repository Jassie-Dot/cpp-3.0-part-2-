/*
    myfuction()= Is the name of the function.
    void= Means that the function does not have a return value
          you will learn more about return values later 
    Inside function (the body), Add code that defines what the 
    function should do.  
*/
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

void myfunction(){
    cout<<"I just got executed!";
}

int main()
{
    myfunction();
    return 0; 
}