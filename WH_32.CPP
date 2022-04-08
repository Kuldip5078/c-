

#include <iostream>
using namespace std;
int main()
{
	char i, j, k = 65;
	i = 1;
	while (i <= 5)
	{
		char j = 1;
		while (j <= i)
		{
			if (j % 2 == 1)
			{
				cout << char (k + 32);
			}
			else
			{
				cout << k;
			}
			k++;
			j++;
		}
		i++;
		cout << "\n";
	}
}