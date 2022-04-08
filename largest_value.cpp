#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "\n Enter a:";
    cin >> a;
    cout << "\n Enter b:";
    cin >> b;
    cout << "\n Enter c:";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "largest num :" << a;
    }
    else if (b>c)
    {
        cout << "largest num : " << b;
    }
    else 
    {
        cout <<"largest num : "<< c;
    }
}