#include <iostream>
using namespace std;
int main()
{
    char i, x;
    // cout << "\n enter n:";
    // cin >> n;
    for (i = 'A'; i <= 'Z'; i++)
    {
        x = i;
        x += 32;
        cout << "\t" << i << "-" << x;
    }
}