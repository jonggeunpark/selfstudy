//Baekjoon online judge
//2156

#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001];
int drk[10001];

int dp(int n)
{
	if (n == 1)
		return drk[n];
	else if (drk[n] != -1)
		return drk[n];
	else
		return drk[n] = max( max((dp(n - 2) + arr[n]), (dp(n - 3) + arr[n - 1] + arr[n])),dp(n-1));
}

int main()
{
	int n;
	int tmp;
	cin >> n;
	fill_n(drk, 10001, -1);
	
	for (int i = 1; i <= n; i++)
	{
		cin >> tmp;
		arr[i] = tmp;
	}

	drk[1] = arr[1];
	drk[2] = arr[1] + arr[2];
	drk[3] = max(max(arr[1] + arr[3], arr[2] + arr[3]),drk[2]);
	
	cout << dp(n);
	return 0;
}