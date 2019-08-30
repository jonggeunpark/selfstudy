//Baekjoon online judge
//4153

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int tmp,arr[3];

	while (1)
	{
		for (int i = 0; i <= 2; i++)
			cin >> arr[i];

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			break;

		for (int i = 0; i < 2; i++)
			for (int j = i; j <= 2 - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}

		if (pow(arr[0],2) + pow(arr[1],2) == pow(arr[2],2))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
	return 0;
}


