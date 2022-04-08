
#include <iostream>
using namespace std;
int main()
{
	char i, j;
	i = 1;
	while (i <= 4)
	{
		char j = 1;
		while (j <= 4)
		{
			if (i % 2 == 0)
			{
				cout << char(j + 96);
			}
			else
			{
				cout << char(j + 64);
			}
			j++;
		}
		i++;
		cout << "\n";
	}
}
