#include <iostream>
using namespace std;
int main()
{
    int i,a=1,n;
    cout<<"enter n:";
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        cout << "\t"<< i*a ;
        a+=a;
    }
}