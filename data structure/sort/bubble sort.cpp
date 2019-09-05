//버블정렬
//O(N^2)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,tmp;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v.size() - i - 1; j++)
		{
			if (v[j] > v[j + 1])
			{
				tmp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		cout << v[i] << " ";

	return 0;
}