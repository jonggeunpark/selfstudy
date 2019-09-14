//Baekjoon online judge
//9461

#include <iostream>
using namespace std;
 
long long memo[101];

long long padovan(int n)
{
	if (memo[n] != -1)
		return memo[n];

	memo[n] = padovan(n - 1) + padovan(n - 5);
	return memo[n];
}

int main()
{

	int t, n;
	cin >> t;

	fill_n(memo, 101, -1);
	memo[1] = 1;
	memo[2] = 1;
	memo[3] = 1;
	memo[4] = 2;
	memo[5] = 2;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cout << padovan(n) << endl;
	}
	return 0;
}