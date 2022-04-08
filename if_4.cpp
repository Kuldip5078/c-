#include<iostream>
using namespace std;
int main()
{
    float unit,charge,subcharge,totalamt;
    cout<<"\n enter unit:";
    cin>>unit;

    if(unit<=100)
    {
        charge=unit*0.60+50;
    }
    else if(unit>100 && unit<=300)
    {
        charge=(unit-100)*0.80+50+60;
    }
    else if(unit>=300)
    {
        charge=(unit-300)*0.90+50+160+60;
    }
    cout<<"\n charge="<<charge;

    if(unit>300)
    {
        subcharge=(charge*0.15)+charge;
    }
    else
    {
        subcharge=charge;
    }
    cout<<"\n subcharge="<<subcharge;
}
