//Baekjoon online judge
//9020

#include <iostream>
using namespace std;

bool check(int a)
{
	int count = 0;

	for (int i = 2; i < a; i++)
	{
		if (a%i == 0)
			count++;
	}

	if (count == 0)
		return true;
	else return false;

}
int main()
{
	int t,n;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;

		for (int j = n / 2; j < n; j++)
		{
			if (check(j) == true && check(n - j) == true)
			{
				cout << n-j << " " << j << endl;
				break;
			}
		}
	}

	return 0;
}