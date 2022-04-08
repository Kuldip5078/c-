#include<iostream>
int main()
{
    int rate=50,qut=200,dis,billamt,gst,netbill,amt,netamt;
    amt=rate*qut;
    dis=amt*0.05;
    billamt=amt-dis;
    gst=billamt*0.18;
    netamt=billamt+gst;
    std::cout<<"\nrate \tqut \tamt \tdis \tbillamt \tgst \tnetamt";
    std::cout<<"\n"<<rate<< "\t"<<qut<<"\t"<<amt<<"\t"<<dis<<"\t"<<billamt<<"\t\t"<<gst<<"\t"<<netamt; 
}