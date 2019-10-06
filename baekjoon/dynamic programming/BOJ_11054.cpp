//Baekjoon online judge
//11054
// 부분수열
#include <iostream>
using namespace std;

int main()
{
	int arr[1001];
	int len[1001];
	int n, a, i;
	int max = 0;
	bool isUp = true;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a;
		arr[i] = a;
	}
	len[0] = 1;

	for (i = 1; i <= n; i++)
	{
		if (arr[i] > arr[i - 1]) // i 값이 더 클때
		{
			if (isUp == true) // 상승 곡선이였다면
				len[i] = len[i - 1] + 1;
			else // 하향 곡선이였다면
			{
				len[i] = 2;
				isUp = true;
			}
		}

		if (arr[i] < arr[i - 1])
		{
			if (isUp == false)
				len[i] = len[i - 1] + 1;
			else
			{
				len[i] = len[i - 1] + 1;
				isUp = false;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		if (len[i] > max)
			max = len[i];
	}

	cout << len[i];
	return 0;
}