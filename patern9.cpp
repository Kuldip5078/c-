#include<iostream>
using namespace std;
int main()
{
    char i,j,k='A';
    for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
        if(j%2==1
        )
        {
            cout<<(char)(k+32);
           
        }
        else
        {
            cout<<k;
            
        }
        k++;
    }
     cout<<"\n";
    }
   
}    