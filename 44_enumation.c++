#include <iostream>
using namespace std;
enum level
{
    LOW,
    MEDIUM,
    HIGH
};
int main()
{
    enum level
    {
        LOW = 25,
        MEDIUM = 50,
        HIGH = 75
    };
    
    enum level myVar = MEDIUM;
    cout << myVar;

    return 0;
}