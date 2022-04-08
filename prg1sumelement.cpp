#include <iostream>
using namespace std;
int main()
{
    int i, a[10], sum = 0;
    cout << "Enter Element=\n";
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << "\nSum=" << sum;
}