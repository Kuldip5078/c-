#include<iostream>
using namespace std;
int main()
{
    int i,j;
    i=5,j=5;
    while(i>=1)
    {
        j=5;
        while(j>=i)
        {
            cout<<"*";
            j--;
        }
        cout<<"\n";
        i--;
    }
}