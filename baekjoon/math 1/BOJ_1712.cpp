//Baekjoon online judge
//1712

#include <iostream>
using namespace std;

int main()
{
	long a, b, c;
	cin >> a >> b >> c;

	if (b >= c)
		cout << "-1";
	else
		cout << (a / (c - b) + 1);

	return 0;
}
