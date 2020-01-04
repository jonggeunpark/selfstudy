#include <iostream>
using namespace std;

int a[1001] = { 0, };

int fac(int n)
{
	if (n == 0)
		return 1;
	else if (a[n] != 0)
		return a[n];
	else
		return a[n] = (n * fac(n - 1))%10007;
}

int main()
{
	int n, k, a, b, c, d, e;
	cin >> n >> k;
	a = fac(n - 1);
	b = fac(k - 1);
	c = fac(n - k);
	d = fac(k);
	e = fac(n - k - 1);
	int r1 = a/(b*c)
	int r1 = (((fac(n - 1) % 10007) / (((fac(k - 1) % 10007) * (fac(n - k) % 10007))) % 10007)) % 10007;
	int r2 = ((fac(n - 1) % 10007) / ((fac(k) % 10007 * fac(n - k - 1) % 10007)) % 10007) % 10007;
	cout << ((r1 % 10007) + (r2 % 10007)) % 10007;

	return 0;
}