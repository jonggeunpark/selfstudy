//Baekjoon online judge
//1546

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	double n,m;
	double max = 0;
	double sum = 0;
	vector<int> v;
	cin >> n;
	
	for (int i = 0;i < n;i++)
	{
		cin >> m;
		v.push_back(m);
		if (m > max)
			max = m;
	}

	for (int i = 0;i < v.size();i++)
		sum += v[i] / max * 100;

	cout << sum / n;
	return 0;
}
