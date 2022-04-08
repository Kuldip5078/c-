#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"\n Enter char : ";
    cin>>ch;
    if(ch=='a' || ch=='e' ||ch=='i' || ch=='o'||ch=='A' || ch=='u'||ch=='E' || ch=='I'||ch=='O' || ch=='U')
    {
        cout<<"\n ch is vovel";

    }
    else
    {
        cout<<"\n ch is conscnant";
    }
}