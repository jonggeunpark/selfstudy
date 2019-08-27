//Baekjoon online judge
//1929

#include <iostream>
using namespace std;

bool check(int a)
{
	int count = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a%i == 0)
			count++;
	}
	if (count == 2)
		return true;
	else return false;
}

int main()
{
	int m, n;
	cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		if (check(i) == true)
			cout << i << endl;
	}
	return 0;
}