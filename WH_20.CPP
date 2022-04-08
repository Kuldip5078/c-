

#include <iostream>
using namespace std;
int main()
{
	int i,j;
	i = 0;
	while (i <= 3)
	{
		int j=0;
		while(j<=3)
		{
			cout<<j++;
		}
		i++;
		cout<<"\n";
	}
}