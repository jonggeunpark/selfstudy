//Baekjoon online judge
//3009

#include <iostream>
using namespace std;

int main()
{
	int x[3], y[3], ans_x, ans_y;
	for (int i = 0; i <= 2; i++)
	{
		cin >> x[i];
		cin >> y[i];
	}

	if (x[2] == x[0])
		ans_x = x[1];
	else if (x[2] == x[1])
		ans_x = x[0];
	else
		ans_x = x[2];


	if (y[2] == y[0])
		ans_y = y[1];
	else if (y[2] == y[1])
		ans_y = y[0];
	else
		ans_y = y[2];

	cout << ans_x << " " << ans_y;

	return 0;
}