#include <iostream>
using namespace std;
int main()
{
    int a;

    cout << "\n entere a:";
    cin >> a;
    if (a % 3 == 0 && a % 5 == 0)
    {
        cout << "yes:" << a;
    }
    else
    {
        cout << "no:" << a;
    }
}
