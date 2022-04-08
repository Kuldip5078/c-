#include <iostream>
using namespace std;
int main()
{
    int unit;
    float total, netbill, amt;
    cout << "enter the unit :";
    cin >> unit;
    if (unit < 100)
    {
        amt = unit * 0.6 + 50;
    }
    else if (unit >= 100 && unit < 200)
    {
        amt = ((unit - 100) * 0.8) + 160 + 50;
    }
    else if (unit >= 200 && unit < 300)
    {
        amt = (((unit - 200) * 0.9) + (200 * 0.8) + (100 * 0.6) + 50);
    }
    else
    {
        amt = (unit - 300) * 0.9 + 160 + 60 + 50;
    }
    cout << "totalbill:" << amt;
    if (amt > 300)
    {
        netbill = (amt * 0.15) + amt;
    }
    else
    {
        netbill = amt;
    }
    cout << "\n netbill :" << netbill;
}