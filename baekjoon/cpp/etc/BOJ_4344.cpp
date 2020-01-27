//Baekjoon online judge
//4344

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	double c, n, num, sum, count;
	double avg;
	vector<int> v;
	cin >> c;

	for (int i = 0;i < c;i++)
	{
		v.clear();
		count = 0;
		sum = 0;
		cin >> n;

		for (int j = 0; j < n;j++)
		{
			cin >> num;
			v.push_back(num);
			sum += num;
		}
		avg = sum / n;
		for (int k = 0;k < n;k++)
		{
			if (v[k] > avg)
				count ++;
		}
		cout.precision(3);
		cout << fixed << count / n * 100 << "%" << endl;
	}

	return 0;
}