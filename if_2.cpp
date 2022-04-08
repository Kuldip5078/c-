#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\n enter tha 3 value:";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"\n a is grater....";
    }
    else
    {
        if(b>c)
        {
            cout<<"\n b is grater....";
        }
        else
        {
            cout<<"\n c is grater....";
        }
    }
}