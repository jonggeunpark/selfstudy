//Baekjoon online judge
//10818

#include <iostream>
using namespace std;

int main()
{
	long n,a;
	long min = 1000000;
	long max = -1000000;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> a;
		if (a < min)
			min = a;
		if (a > max)
			max = a;
	}

	cout << min << " " << max;
	return 0;
}