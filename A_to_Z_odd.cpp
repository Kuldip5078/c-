#include <iostream>
using namespace std;
int main()
{
    char i;
    // cout << "\n enter n:";
    // cin >> n;
    for (i = 'A'; i <= 'Z'; i++)
    {
        if(i%2!=0)
        cout << "\t" << i;
    }
}