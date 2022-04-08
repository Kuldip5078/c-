#include <iostream>
using namespace std;
int main()
{
    int rate = 50, qut = 200, amt, dis, billamt, gst, netbill;
    int d(int);
    int g(int);
    amt = rate * qut;
    dis = d(amt);
    billamt = amt - dis;
    gst = g(billamt);
    netbill = billamt + gst;
    cout << "\nrate\t qut\t amt\t dis\t billamt\t gst\t netbill";
    cout << "\n"<< rate << "\t" << qut << "\t" << amt << "\t" << d(amt) << "\t" << billamt << "\t\t" << g(billamt) << "\t" << netbill;
}
int d(int amt)
{
    int dis;
    dis = amt * 0.05;
    return dis;
}
int g(int billamt)
{
    int gst;
    gst = billamt * 0.18;
    return gst;
}