//Baekjoon online judge
//1978

#include <iostream>
using namespace std;

int main()
{
	int n, a, count;
	int ans = 0;
	int arr[100];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		count = 0;
		cin >> a;
		arr[i] = a;

		for (int j = 1; j <= arr[i]; j++)
			if (arr[i] % j == 0)
				count++;
		if (count == 2)
			ans++;
	}
	cout << ans << endl;

	return 0;
}