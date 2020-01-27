//Baekjoon online judge
//2579	

#include <iostream>
#include <algorithm>
using namespace std;

int score[301];
int sum[301];

int getMaxScore(int n)
{
	if (sum[n] != -1)
		return sum[n];
	else
		sum[n] = max(getMaxScore(n - 3) + score[n - 1] + score[n], getMaxScore(n - 2) + score[n]);
	return sum[n];
}

int main()
{
	int n,tmp;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> tmp;
		score[i] = tmp;
	}
	fill_n(sum, n+1, -1);
	sum[1] = score[1];
	sum[2] = score[1] + score[2];
	sum[3] = max(score[1] + score[3], score[2] + score[3]);

	getMaxScore(n);

	cout << sum[n];
	return 0;
}

