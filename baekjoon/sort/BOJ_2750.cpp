//Baekjoon online judge
//2750

#include <iostream>
using namespace std;

void sort(int n, int* arr)
{
	int tmp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int n, tmp;
	cin >> n;
	int* arr = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		arr[i] = tmp;
	}

	sort(n,arr);

	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;

	return 0;
}