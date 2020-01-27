#include <iostream>
#include <vector>
using namespace std;

int findGcd(int a, int b)
{
	int tmp;

	while (b != 0)
	{
		tmp = a;
		a = b;
		b = tmp % b;
	}
	return a;
}

int main()
{
	int n,r,gcd;
	vector<int> a;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> r;
		a.push_back(r);
	}

	for (int i = 1; i < n; i++)
	{
		gcd = findGcd(a[0],a[i]);
		cout << a[0] / gcd << '/' << a[i] / gcd << endl;
	}
	return 0;
}