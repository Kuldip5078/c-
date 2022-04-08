
#include <iostream>
using namespace std;
int main()
{
	char i, j;
	i = 65;
	while (i <= 69)
	{
		char j = i;
		while (j >= 65)
		{
			cout<<char (j);
			j--;
		}
		i++;
		cout << "\n";
	}
}