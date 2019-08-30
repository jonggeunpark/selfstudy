//Baekjoon online judge
//2798

#include <iostream>
using namespace std;

int main()
{
	int n, m;
	int sum = 0;
	int tmp = 0;
	cin >> n >> m;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int j = 0; j < n-2; j++)
	{
		for (int k = j + 1; k < n-1; k++)
		{
			for (int p = k +1; p < n; p++)
			{
				sum = arr[j] + arr[k] + arr[p];
				if (sum <= m && sum > tmp)
					tmp = sum;
				sum = 0;
			}
		}
	}

	cout << tmp;

	return 0;
}
