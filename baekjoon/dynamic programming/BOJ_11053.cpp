//Baekjoon online judge
//11053

#include <iostream>
using namespace std;
int main()
{
	int n;
	int arr[1001] = { 0, };
	int len[1001] = { 0, };
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	len[0] = 1;
	
	for (int i = 1; i < n; i++)
	{
		len[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] < arr[j] && len[i] < len[j]+1)
			{
				len[i] = len[i] + 1;
			}
		}
	}
	cout << count;

	return 0;
 }