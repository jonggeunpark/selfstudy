//swExpertAcademy
//3131
//에라토스테네스의 체

#include <iostream>
#include <stdlib.h>
#define SIZE 1000000
using namespace std;

int main()
{
	// 동적할당으로 메모리 부족 해결
	int* arr = (int*)malloc(sizeof(int) * SIZE); 
	fill_n(arr, SIZE, 1);
	bool check;

	for (int i = 2;i <= 1000;i++)
	{
		check = false;
		for (int j = i;j < SIZE;j++)
		{
			if (arr[j] == 1)
				if ((j + 1) % i == 0)
					arr[j] = 0;
				else if (check == true)
				{
					i = j + 1;
				}
		}
	}
	for (int i = 1;i < SIZE;i++)
		if (arr[i] == 1)
			cout << i + 1 << " ";

	free(arr);

	return 0;
}