//Baekjoon online judge
//1931

#include <iostream>
#include <vector>
using namespace std;

int selectFastMeeting(vector<pair<int,int>> &v)
{
	if (v.empty() == true)
		return -1;

	int min=v[0].second;
	int index = 0;
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i].second == min)
		{
			if (v[index].first > v[i].first)
			index = i;
		}
		if (v[i].second < min)
		{
			min = v[i].second;
			index = i;
		}
	}
	return index;
}

void deleteElseMeeting(int index, vector<pair<int, int>> &v)
{
	int end = v[index].second;
	v.erase(v.begin() + index);

	for (int i = 0; i < v.size();)
	{
		if (v[i].first < end)
			v.erase(v.begin() + i);
		else
			i++;
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t, a, b;
	int count = 0;
	int meetIndex = 0;
	vector<pair<int,int>> v;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		v.push_back(pair<int, int>(a, b));
	}

	while (v.empty() != true)
	{
		meetIndex = selectFastMeeting(v); // 가장 빨리 끝나는 회의 찾기
		deleteElseMeeting(meetIndex,v); // 가장 빨리 끝나는 회의와 겹치는 회의 제거
		count++;
	}

	cout << count;
	return 0;
}