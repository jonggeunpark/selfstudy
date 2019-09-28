//Baekjoon online judge
//1463

#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000000] = { 0, };

int makeOne(int n)
{
	int tmp = 0;
	int min = 1000000;
	if (n == 1)
		return arr[n];
	else if (arr[n] != 0)
		return arr[n];
	else
	{
		if (n % 3 == 0)
			min = makeOne(n / 3);
		if (n % 2 == 0)
		{
			tmp = makeOne(n / 2);
			if (tmp < min)
				min = tmp;
		}
		
		tmp = makeOne(n - 1);
		if (tmp < min)
			min = tmp;

		return arr[n] = min + 1;
	}
}

int main()
{
	int n;
	int count = 0;
	cin >> n;

	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;
	makeOne(n);
	cout << arr[n];
	return 0;
}
