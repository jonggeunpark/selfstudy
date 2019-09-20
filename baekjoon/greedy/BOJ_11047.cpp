//Baekjoon online judge
//11047

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, k, tmp;
	int count = 0;
	vector<int> v;
	
	cin >> n >> k;
	
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}

	for (int i = n-1; i >= 0; i--)
	{
		if (k >= v[i] )
		{
			count += k / v[i];
			k = k % v[i];
		}

		if (k == 0)
			break;
	}

	cout << count;
	return 0;
}