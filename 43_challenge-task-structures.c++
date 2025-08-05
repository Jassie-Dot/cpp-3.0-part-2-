#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
 struct student
 {
    string name;
    int age;
    char grade;
 }s1,s2,s3;
 
int main()
{
    s1.name="Jassie";
    s1.age=18;
    s1.grade='A';

    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Grade: "<<s1.grade<<endl;
   
   return 0;
}