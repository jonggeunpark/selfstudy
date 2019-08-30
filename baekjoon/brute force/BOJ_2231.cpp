//Baekjoon online judge
//2231

#include <iostream>
using namespace std;

int main()
{
	int n, sum, tmp, ans;
	bool check = false;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		tmp = i;
		sum = i;
		while (1)
		{
			if (tmp == 0)
				break;
			else
			{
				sum += tmp % 10;
				tmp = tmp / 10;
			}
		}

		if (sum == n)
		{
			ans = i;
			check = true;
			break;
		}
	}

	if (check == true)
		cout << ans;
	else
		cout << 0;

	return 0;
}
