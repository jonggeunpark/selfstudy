//Baekjoon online judge
//1018

#include <iostream>
using namespace std;

bool check(int i)
{
	int count = 0;
	while (i != 0)
	{
		if (i % 10 == 6)
			count++;
		else
			count = 0;

		i = i / 10;

		if (count == 3)
			return true;
	}

	return false;
}

int main()
{
	int n;
	int count = 0;
	cin >> n;

	for(int i=1;;i++)
	{
		if (check(i) == true)
			count++;

		if (count == n)
		{
			cout << i;
			break;
		}
	}
	return 0;
}