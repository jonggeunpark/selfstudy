//Baekjoon online judge
//1011

#include <iostream>
using namespace std;

int main()
{
	long long int t, x, y;
	long long int dis;
	long long int count;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		dis = 0;
		count = 0;

		cin >> x >> y;
		for(long long int j=x;j<y-1;)
		{
			dis = dis + 1;
			j = j + dis;
			count++;
		}
		if (x == y)
			cout << '0' << endl;
		else
			cout << count + 1 << endl;
	}
	return 0;
}
0 1 3 6 10 14 15