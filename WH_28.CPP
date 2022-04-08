
#include <iostream>
using namespace std;
int main()
{
	int i, j,k=1;
	i = 1;
	while (i <= 5)
	{
		int j = 1;
		while (j <= i)
		{
			cout<<k++;
			j++;
		}
		i++;
		cout << "\n";
	}
}