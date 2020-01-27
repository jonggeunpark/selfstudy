//Baekjoon online judge
//10250

#include <iostream>
using namespace std;

int main()
{
	int t, h, w, n, y, x;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;
		if (n%h == 0)
			y = h;
		else
			y = n%h;

		x = (n - 1) / h + 1;

		cout << y * 100 + x << endl;

/****
		if (x < 10)
			cout << y << "0" << x << endl;
		else
			cout << y << x << endl;
****/
	}
	return 0;
}
