//Baekjoon online judge
//2775

#include <iostream>
using namespace std;

int main()
{
	int t, k, n;
	int arr[15];
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> k >> n;

		fill_n(arr, n+1, 1);

		for (int p = 0; p <= k; p++)
			for (int q = 2; q <= n; q++)
					arr[q] = arr[q - 1] + arr[q];

		cout << arr[n] << endl;
	}
	return 0;
}