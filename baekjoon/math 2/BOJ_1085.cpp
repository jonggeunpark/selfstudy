//Baekjoon online judge
//1085

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y, w, h;
	int length1, length2;
	cin >> x >> y >> w >> h;

	if (w - x < x)
		length1 = w - x;
	else
		length1 = x;

	if (h - y < y)
		length2 = h - y;
	else
		length2 = y;

	if (length1 < length2)
		cout << length1;
	else cout << length2;

	return 0;
}