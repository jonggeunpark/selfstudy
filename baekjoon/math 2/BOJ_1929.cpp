//Baekjoon online judge
//1929
//에라토스테네스의 체

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;

	int *arr = new int[n + 2 ];
	fill_n(arr, n + 2 , true);
	arr[1] = false;

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (arr[i] == true)
		{
			for (int j = i * i; j <= n; j++)
			{
				if (j%i == 0)
					arr[j] = false;
			}
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (arr[i] == true)
			cout << i << '\n';
	}

	return 0;
}