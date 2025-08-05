#include <iostream>
#include <string>
using namespace std;
int doublegame(int x)
{
    return x * 2;
}
int main()
{
    for(int i=1; i<=10; i++){
        cout<<"Double of "<<i<<" is "<<doublegame(i)<<endl;
    }
    return 0;
}