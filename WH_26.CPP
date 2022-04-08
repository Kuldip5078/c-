


#include <iostream>
using namespace std;
int main()
{
	int i, j;
	i = 1;
	while (i <= 5)
	{
		int j = 1;
		while (j <= i)
		{
			cout<<i,j;
			j++;
		}
		i++;
		cout << "\n";
	}
}