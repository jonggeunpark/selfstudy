//Baekjoon online judge
//2562

#include <iostream>
using namespace std;

int main()
{
	int a,index;
	int max = 0;

	for (int i = 1;i <= 9;i++)
	{
		cin >> a;
		if (a > max)
		{
			max = a;
			index = i;
		}
	}
	cout << max << endl << index;
	return 0;
}
