//Baekjoon online judge
//2751

#include <iostream>
#include <vector>
using namespace std;

void sort(int n,vector<int> &v)
{
	int tmp;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - i - 1; j++)
		{
			if (v[j] > v[j + 1])
			{
				tmp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = tmp;
			}
		}
}

int main()
{
	int n, tmp;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(n, v);

	for (int i = 0; i < n; i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}