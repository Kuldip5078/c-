

#include <iostream>
using namespace std;
int main()
{
	char i, j;
	i = 1;
	while (i <= 5)
	{
		char j = 1;
		while (j <= i)
		{
			cout << char(65 + j - i);
			j++;
		}
		i++;
		cout << "\n";
	}
}