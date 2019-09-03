//Baekjoon online judge
//2751

#include <iostream>
using namespace std;

void mergeTwoArea(int arr[],int arr2[], int left, int mid, int right)
{
	int fIdx = left;
	int rIdx = mid + 1;
	int sIdx = left;
	int i;

	while (fIdx <= mid && rIdx <= right)
	{
		if (arr[fIdx] <= arr[rIdx])
			arr2[sIdx] = arr[fIdx++];
		else
			arr2[sIdx] = arr[rIdx++];

		sIdx++;
	}

	if (fIdx > mid)
	{
		for (int i = rIdx; i <= right; i++, sIdx++)
			arr2[sIdx] = arr[i];
	}
	else
	{
		for (i = fIdx; i <= mid; i++,sIdx++)
			arr2[sIdx] = arr[i];
	}

	for (i = left; i <= right; i++)
		 arr[i] = arr2[i];
}

void mergeSort(int arr[],int arr2[], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		mergeSort(arr, arr2,left, mid);
		mergeSort(arr, arr2,mid + 1, right);
		mergeTwoArea(arr,arr2, left, mid, right);
	}
}

int main()
{
	cin.tie(NULL);

	int n, tmp;
	cin >> n;
	int* arr = new int[n];
	int* arr2 = (int*)malloc(sizeof(int)*(1000000));

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		arr[i] = tmp;
	}

	mergeSort(arr,arr2, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\n';
	}

	free(arr2);

	return 0;
}