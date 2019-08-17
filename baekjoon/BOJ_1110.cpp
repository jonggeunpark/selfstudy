//Baekjoon online judge
//1110

#include <iostream>
using namespace std;

int main()
{
	int n, a, b, tmp, next, count;
	count = 0;
	cin >> n;

	a = n / 10;
	b = n % 10;

	do {
		next = b * 10 + (a + b) % 10;
		tmp = a;
		a = b;
		b = (tmp + b) % 10;
		count++;
	} while (next != n);

	cout << count;

	return 0;
}
