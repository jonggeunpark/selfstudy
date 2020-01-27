//Baekjoon online judge
//6064
//유클리드 호제법

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int GCD(int a, int b)
{
	int tmp;
	if (a < b)
		swap(a, b);

	while (a%b != 0)
	{
		tmp = a;
		a = b;
		b = tmp % b;
	}

	return b;
}

int LCM(int a, int b)
{
	return a * b / GCD(a, b);
}


int main()
{
	int t, m, n, x, y, max, ans;
	bool check;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> m >> n >> x >> y;

		if (m > n)
		{
			swap(m, n);
			swap(x, y);
		}
			
		ans = x;
		check = false;
		max = LCM(m, n);

		for (int p = x; ans <= max;)
		{
			if (p == y)
			{
				check = true;
				break;
			}

			if ((p + m) % n == 0)
				p = n;
			else
				p = (p + m) % n;
			ans += m;
		}

		if (check == true)
			cout << ans << endl;
		else
			cout << "-1" << endl;
	}
	return 0;
}