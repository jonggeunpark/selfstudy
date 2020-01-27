
//Baekjoon online judge
//1932

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<vector<int> > tri(501,vector<int>(501,0));
	vector<vector<int> > sum(501,vector<int>(501,0));
	int n, a;
	int ans = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> a;
			tri[i][j] = a;
		}
	}

	sum[1][1] = tri[1][1];

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			sum[i][j] = max(sum[i - 1][j - 1], sum[i - 1][j]) + tri[i][j];
			if (sum[i][j] > ans)
				ans = sum[i][j];
		}
	}

	cout << ans;

	return 0;
}