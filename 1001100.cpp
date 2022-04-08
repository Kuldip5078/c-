#include <iostream>
using namespace std;
int main()
{
    int i, a = 1, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << a++ % 2;
        }
        cout << "\n";
    }
}