#include<iostream>
using namespace std;
int main()
{
    int i,a[100],odd=0,even=0;
    cout<<"Enter Element=";
    for(i=0;i<5;i++)
    cin>>a[i];
    for(i=0;i<5;i++)
    {
        if( i%2==0)
        even=even+a[i];
        else
        odd=odd+a[i];
    }
    cout<<"Even Position Sum="<<even<<"\n";
    cout<<"Odd Position Sum="<<odd;
}