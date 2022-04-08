#include <iostream>
using namespace std;
int main()
{
    int i, a , j;
a=11;
    for (i = 1; i <= 10; ++i)
    {
        for (j = 1; j <= 5; j++, a++)

            if (i % 2 != 0)
            {
                cout << a;
            }

        cout << "\n";
    }
}