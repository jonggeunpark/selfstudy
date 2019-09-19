//Baekjoon online judge
//11399

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,a;
	long long time = 0;
	long long tmp = 0;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	
	for (int i = 0; i < n; i++)
	{
		tmp += v[i];
		time += tmp;
	}
	cout << time;
	return 0;
}