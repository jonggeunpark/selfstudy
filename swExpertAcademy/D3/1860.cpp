//swExpertAcademy
//1860

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t, n, m, k, tmp, eaten_bread;
	bool check;
	vector <int> v;


	cin >> t;

	for (int i = 1;i <= t;i++)
	{
		v.clear();
		check = true;
		eaten_bread = 0;

		cin >> n >> m >> k;

		for (int i = 0;i < n;i++) // 벡터에 대입
		{
			cin >> tmp;
			v.push_back(tmp);
		}

		for (int i = 0;i < n;i++) // 오름차순 정렬
			for (int j = 0;j < n - i - 1;j++)
			{
				if (v[j] > v[j + 1])
				{
					tmp = v[j];
					v[j] = v[j + 1];
					v[j + 1] = tmp;
				}
			}

		for (int i = 0;i < n;i++)
		{
			if (v[i] / m * k - eaten_bread <= 0)
				check = false;
			else
				eaten_bread++;
		}

		cout << "#" << i;
		if (check == true)
			cout << " Possible" << endl;
		else
			cout << " Impossible" << endl;
	}
	return 0;
}