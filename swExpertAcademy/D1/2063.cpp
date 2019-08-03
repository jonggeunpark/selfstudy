//swExpertAcademy
//2063

#include <iostream>
using namespace std;

void sort(int arr[],int count)
{
	int i, j,tmp;
	for (int i = 0;i < count -1;i++)
	{
		for (int j = 0;j < (count -i) - 1;j++) 
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	int n, tmp;
	cin >> n;
	int *score = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n;i++)
		cin >> score[i];

	sort(score, n);
	cout << score[n / 2];

	return 0;
}