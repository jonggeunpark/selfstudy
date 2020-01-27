//Baekjoon online judge
//1904

#include <iostream>
using namespace std;

long long memo[1000001];

long long fibonacci(int n)
{
	if (n < 2)
		return n;
	else if (memo[n] != -1)
		return memo[n];

	memo[n] = (fibonacci(n - 1) + fibonacci(n - 2)) % 15746;
	return memo[n];
}

int main()
{
	int n;
	long long ans;
	cin >> n;
	fill_n(memo, 1000000, -1);
	ans = fibonacci(n+1);
	cout << ans;
	return 0;
}