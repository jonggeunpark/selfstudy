//Baekjoon online judge
//4948
//베르트랑 공준

#include <iostream>
#include <math.h>
using namespace std;
#define SIZE 246912

void setArr(bool arr[])
{
	fill_n(arr, SIZE + 2, true);
	arr[1] = false;

	for (int i = 2; i <= sqrt(SIZE); i++)
	{
		if (arr[i] == true)
		{
			for (int j = i * 2; j <= SIZE; j++)
			{
				if (j%i == 0)
				{
					arr[j] = false;
				}
			}
		}
	}
}

int main()
{
	int n;
	int count;
	bool arr[SIZE + 2];
	setArr(arr);

	while (1)
	{
		count = 0;
		cin >> n;

		if (n == 0)
			break;

		for (int i = n+1; i <= 2*n; i++)
		{
			if (arr[i] == true)
				count++;
		}

		cout << count << endl;
	}

	return 0;
}