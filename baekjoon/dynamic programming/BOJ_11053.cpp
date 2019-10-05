//Baekjoon online judge
//11053

#include <iostream>
using namespace std;
int main()
{
	int n;
	int max = 0;
	int arr[1001] = { 0, };
	int len[1001] = { 0, };
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		len[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i] && len[i] == len[j])
			{
				len[i] = len[j] + 1;
			}
		}
		if (len[i] > max)
			max = len[i];
	}

	cout << max;

	return 0;
 }