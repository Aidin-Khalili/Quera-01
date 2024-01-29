#include <iostream>
using namespace std;
int x(char n)
{
	int i = 0;
	i = (n - '0');
	return i;
}
int main()
{
	int i = 0 , n , j;
	string a;
	cin >> a;
	while (a[i] != '\0')
	{
		n = x(a[i]);
		cout << n << ": ";
		for (j = 0; j < n; j++)
			cout << n;
		cout << endl;
		i++;
	}


	return 0;
}