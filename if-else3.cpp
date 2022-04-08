#include<iostream>
using namespace std;
int main()
{
    float bs,gs,hra,da;
    cout<<"\n enter basic salary:";
    cin>>bs;

    if(bs<5000)
    {
        hra=bs*8/100;
        da=bs*20/100;
    }
    else if(bs>=5000 && bs<=10000)
    {
        hra=bs*12/100;
        da=bs*10/100;
        
    }
    else if(bs>=10000 && bs<=15000)
    {
        hra=bs*20/100;
        da=bs*50/100;
    }
    cout<<"\n hra:"<<hra;
    cout<<"\n da:"<<da;

    gs=bs+hra+da;
    cout<<"\n gs="<<gs;
}
