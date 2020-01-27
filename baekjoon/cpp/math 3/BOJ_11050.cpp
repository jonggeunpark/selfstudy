#include <iostream>

using namespace std;

int fac(int a)
{
	int ans = 1;

	for (int i = a; i > 1; i--)
	{
		ans = ans * i;
	}

	return ans;
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << fac(a) / (fac(b) * fac(a - b));

	return 0;
}