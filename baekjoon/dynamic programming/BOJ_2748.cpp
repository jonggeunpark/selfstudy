//Baekjoon online judge
//2748

#include <iostream>
using namespace std;

long long memo[91];

long long fibonacci(int n)
{
	if (n < 2)
		return n;
	else if (memo[n] != -1)
		return memo[n];
		
	memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return memo[n];
}

int main()
{
	int n;
	long long ans;
	cin >> n;

	fill_n(memo, 91,-1);
	ans = fibonacci(n);

	cout << ans;
	return 0;
}