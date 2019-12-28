#include<iostream>
using namespace std;

int find(int a, int b)
{
	int g;

	while (1)
	{
		if (a % b == 0)
		{
			g = b;
			break;
		}
		else
		{
			g = a;
			a = b;
			b = g % b;
		}
	}

	return g;
}

int main()
{
	int a, b, tmp, gcd;

	cin >> a >> b;

	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	gcd = find(a, b);
	cout << gcd << endl << a * b / gcd;

	return 0;
}