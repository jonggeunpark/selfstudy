//Baekjoon online judge
//2751
//계수 정렬

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, tmp, cnt;
	int count[10001] = { 0, };
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		count[tmp]++;
	}

	for (int i = 1; i <= 10000; i++)
		for (int j = 0; j < count[i]; j++)
			cout << i << '\n';

	return 0;
}