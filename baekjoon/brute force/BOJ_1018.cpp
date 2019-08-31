//Baekjoon online judge
//1018

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int coloring(int n,int m,string* s, char start,int x,int y)
{
	int count = 0;
	char now;

	for (int i = y; i < y+8; i++)
	{
		now = start;
		for (int j = x; j < x+8; j++)
		{
			if (s[i].at(j) != now)
				count++;

			if (now == 'W')
				now = 'B';
			else now = 'W';
		}

		if (start == 'W')
			start = 'B';
		else start = 'W';
	}
	return count;
}

int main()
{
	int n, m, tmp;
	int ans = 64;
	cin >> n >> m;
	string* s = new string[n];
	
	for (int i = 0; i < n; i++)
		cin >> s[i];

	for (int i = 0; i <= m - 8; i++)
	{
		for (int j = 0; j <= n - 8; j++)
		{
			tmp = coloring(n, m, s, 'W', i, j);
			if (tmp < ans)
				ans = tmp;
			tmp = coloring(n, m, s, 'B', i, j);
			if (tmp < ans)
				ans = tmp;
		}
	}
	cout << ans;

	return 0;
}