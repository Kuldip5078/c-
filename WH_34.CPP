
#include<iostream>
using namespace std;
int main()
{
	int i, j;
	i = 5;
	while (i >= 1)
	{
		j = i;
		while (j <= 5)
		{
			cout << j;
			j++;
		}
		i--;
		cout << "\n";
	}
}