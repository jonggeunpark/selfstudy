#include <iostream>
using namespace std;

int a[1001][1001] = { 0, };

int bi(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	else if (a[n][k] != 0)
		return a[n][k];
	else
		return a[n][k] = ((bi(n - 1, k - 1) % 10007) + (bi(n - 1, k) % 10007)) % 10007;
}

int main()
{
	int n, k;
	cin >> n >> k;

	cout << bi(n, k);
	return 0;
}