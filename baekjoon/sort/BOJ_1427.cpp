//Baekjoon online judge
//1427

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[10] = { 0, };

	while (n != 0)
	{
		arr[n % 10]++;
		n = n / 10;
	}

	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < arr[i]; j++)
			cout << i;
	}
	return 0;
}
