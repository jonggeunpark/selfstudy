//Baekjoon online judge
//1931

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int,int> &a, const pair<int,int> &b)
{
	if (a.second < b.second)
		return true;
	else if (a.second == b.second)
	{
		return a.first < b.first;
	}
	else
		return false;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t, a, b;
	vector<pair<int,int>> v;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		v.push_back(pair<int, int>(a, b));
	}

	sort(v.begin(), v.end(), cmp);

	int count = 1;
	int lastTime = v[0].second;

	for (int i = 1; i < v.size(); i++)
	{
		if (v[i].first < lastTime)
			continue;
		else if (v[i].second >= lastTime)
		{
			lastTime = v[i].second;
			count++;
		}
	}

	cout << count;
	return 0;
}