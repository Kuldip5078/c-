#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"\n enter char:";
    cin>>ch;

    if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        cout<<"\n ch is vowel";
    }
    else
    {
        cout<<"\n ch is consonent"; 
    }
}