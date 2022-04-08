#include <iostream>
using namespace std;
int main()
{
    char i;
    for(i=65;i<=122;i+2)
    {
        if(i>=65 && i<=90)
        {
            cout<<"\t"<<i;
            i+=34;
        }
        else if(i>=99 && i<=122)
        {
            cout<<"\t"<<i;
            i-=32;
        }
    }
}