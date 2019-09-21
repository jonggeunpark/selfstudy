//Baekjoon online judge
//2217

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool desc(int a, int b)
{
	return a > b;
}

int main()
{
	int n,tmp;
	int ans = 0;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end(), desc);

	for (int i = 0; i < n; i++)
	{
		if (v[i] * (i + 1) > ans)
			ans = v[i] * (i + 1);
	}

	cout << ans;
	
	return 0;
}