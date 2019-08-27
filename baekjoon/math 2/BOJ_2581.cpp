//Baekjoon online judge
//2581

#include <iostream>
using namespace std;

bool check(int a)
{
	int count = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a%i == 0)
			count++;
	}
	
	if (count == 2)
		return true;
	else return false;
}

int main()
{
	int m, n;

	cin >> m;
	cin >> n;

	int ans = 0;
	int min = n;

	for (int i = m; i <= n; i++)
	{
		if (check(i) == true)
		{
			ans += i;
			if (i < min)
				min = i;
		}
	}

	if (ans == 0)
		cout << "-1";
	else
		cout << ans << endl << min;

	return 0;
}