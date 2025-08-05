#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

void myfunction(string name,int age){
    cout<<name<<" Refsnes. "<< age <<" years old. "<<endl;
}

int main()
{
    myfunction("Jassie",3);
    myfunction("Jassie",3);
    myfunction("Jassie",3);

    return 0;
}