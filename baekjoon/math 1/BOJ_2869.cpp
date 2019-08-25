//Baekjoon online judge
//2869

#include <iostream>
using namespace std;

int main()
{
	long long a, b, v;
	long long count = 0;

	cin >> a >> b >> v;

	if ((v - b) % (a - b) == 0)
		cout << (v - b) / (a - b);
	else
		cout << (v - b) / (a - b) + 1;

	return 0;
}
