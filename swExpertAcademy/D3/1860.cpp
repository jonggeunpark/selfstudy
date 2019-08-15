//swExpertAcademy
//1860

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t, n, m, k, tmp, time;
	int bread, count;
	bool check;
	vector <int> v;
	cin >> t;

	for (int i = 1;i <= t;i++)
	{
		v.clear();
		check = true;
		count = 0;
		bread = 0;

		cin >> n >> m >> k;

		for (int i = 0;i < n;i++)
		{
			cin >> tmp;
			v.push_back(tmp);
		}

		for (int i = 0;i < n;i++)
			for (int j = 0;j < n - i - 1;j++)
			{
				if (v[j] > v[j + 1])
				{
					tmp = v[j];
					v[j] = v[j + 1];
					v[j + 1] = tmp;
				}
			}

		for (int time = 0;time < 11112;time++)
		{
			if (time / m >= 1 && time%m == 0)
				bread += k;

			for (int i = 0;i < n;i++)
			{
				if (time == v[i])
				{
					if (bread == 0)
					{
						check = false;
						break;
					}
					bread -= 1;
				}
			}
			if (check == false)
				break;
		}

		cout << "#" << i;
		if (check == true)
			cout << " Possible" << endl;
		else
			cout << " Imossible" << endl;
	}
	return 0;
}