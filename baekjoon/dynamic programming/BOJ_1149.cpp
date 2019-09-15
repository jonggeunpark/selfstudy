//Baekjoon online judge
//1149

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int ans[1000][3], cost[1000][3];
	int n, r, g, b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
	}
	ans[0][0] = cost[0][0];
	ans[0][1] = cost[0][1];
	ans[0][2] = cost[0][2];

	// n번째 집을 빨간색으로 칠하는 최소 비용 
	// = n-1번째 집을 파란색, 초록색으로 칠한 것 중 최소비용 + n번째 집을 빨간색 칠하는 비용
	for (int i = 1; i < n; i++)
	{
		ans[i][0] = min(ans[i - 1][1], ans[i - 1][2]) + cost[i][0];
		ans[i][1] = min(ans[i - 1][0], ans[i - 1][2]) + cost[i][1];
		ans[i][2] = min(ans[i - 1][0], ans[i - 1][1]) + cost[i][2];
	}

	cout << min(min(ans[n-1][0], ans[n-1][1]), ans[n-1][2]);
	return 0;
}