//Baekjoon online judge
//1065

#include <iostream>
using namespace std;

bool check(int n, bool arr[]);

int main()
{
	int n;
	int count = 0;
	bool arr[1000];
	fill_n(arr, 1000, true);
	cin >> n;

	for (int i = 1;i <= n;i++)
		if (check(i, arr) == true)
			count++;

	cout << count; 
	return 0;
}

bool check(int n,bool arr[])
{
	int prev = n % 10;
	int tmp = n/10;
	int dif = prev - tmp%10 ;
	while (tmp != 0)
	{
		if (dif != prev - tmp % 10)
		{
			arr[n - 1] = false;
			return false;
		}
		prev = tmp % 10;
		tmp = tmp / 10;
	}
	return true;
}