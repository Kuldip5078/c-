

#include <iostream>
using namespace std;
int main()
{
	int i,j;
	i = 1;
	while (i <= 7)
	{
		int j=1;
		while(j<=7)
		{
			cout<<j,i;
			j+=2;
		}
		i+=2;
		cout<<"\n";
	}
}