
#include <iostream>
using namespace std;

int main()
{

    int a[5][5], b[5][5], i, j, total = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << " enter a:[" << i <<"]["<< j<<"]=";
            cin >>a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << " enter b:[" << i <<"]["<< j<<"]=";
            cin>> b[i][j];
        }
    }
    cout << "\n\t\t matrix1\t\tmtrix2\t\t  matrix3\n";

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
           cout<<"\t"<< a[i][j];
        }
             cout<<"+";
        for (j = 0; j < 3; j++)
        {
           cout<<"\t" <<b[i][j];
        }
        cout<<"=";
        for (j = 0; j < 3; j++)
        {
            total = a[i][j] + b[i][j];
          cout<<"\t"<< total;
        }
        cout<<"\n";
    }
    
}