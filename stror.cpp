#include<iostream>
int main()
{
    int rate=50,qut=200,amt,dis,billamt,gst,netbill;

    amt=rate*qut;
    dis=amt*0.05;
    billamt=amt-dis;
    gst=billamt*0.18;
    netbill=billamt+gst;
    std::cout<<"\nrate\t qut\t amt\t dis\t billamt\t gst\t netbill";
    std::cout<<"\n"<<rate<<"\t"<<qut<<"\t"<<amt<<"\t"<<dis<<"\t"<<billamt<<"\t\t"<<gst<<"\t"<<netbill;
}