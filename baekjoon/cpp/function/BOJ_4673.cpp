//Baekjoon online judge
//4673

#include <iostream>
using namespace std;

void check(int n, bool arr[]);

int main()
{
	bool arr[20000];
	fill_n(arr, 10000, true);

	for (int i = 1;i <= 10000;i++)
		check(i,arr);

	for (int i = 0;i < 10000;i++)
		if (arr[i] == true)
			cout << i + 1 << endl;
	return 0;
}

void check(int n,bool arr[])
{
	int dn = n;
	while (n != 0)
	{
		dn += n % 10;
		n = n / 10;
	}
	arr[dn-1] = false;
}