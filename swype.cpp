#include<iostream>
using namespace std;
int main()
{
    int a=2,b=3,c,d;
    c=b;
    b=a;
    a=c;
    cout<<b;
    cout<<"\n"<<a;
}