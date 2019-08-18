//Baekjoon online judge
//2920

#include <iostream>
using namespace std;

int main()
{
	int n;
	int count = 0;
	int arr[8];

	for (int i = 0;i < 8;i++)
	{
		cin >> n;
		arr[i] = n;
	}

	for (int i = 0;i < 8;i++)
	{
		if (arr[i] == i + 1)
			count++;
		else if(arr[i] == 8 - i)
			count--;
	}

	if (count == 8)
		cout << "ascending";
	else if (count == -8)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}