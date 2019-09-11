//Baekjoon online judge
//11650

#include<iostream>
using namespace std;

typedef struct point {
	int x, y;
}point;

void merge_x(point arr[], point arr_s[],int left,int mid,int right)
{
	int i = left;
	int j = mid + 1;
	int k = left;

	while (i <= mid && j <= right)
	{
		if (arr[i].x <= arr[j].x)
		{
			arr_s[k].x = arr[i].x;
			arr_s[k++].y = arr[i++].y;
		}
		else
		{
			arr_s[k].x = arr[j].x;
			arr_s[k++].y = arr[j++].y;
		}
	}

	if (i > mid)
	{
		for (int p = j; p <= right; p++)
		{
			arr_s[k].x = arr[p].x;
			arr_s[k++].y = arr[p].y;
		}
	}
	else
	{
		for (int p = i; p <= mid; p++)
		{
			arr_s[k].x = arr[p].x;
			arr_s[k++].y = arr[p].y;
		}
	}

	for (int i = left; i <= right; i++)
	{
		arr[i].x = arr_s[i].x;
		arr[i].y = arr_s[i].y;
	}

	free(arr_s);
}

void mergeSort_x(point arr[], point arr_s[],int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		mergeSort_x(arr,arr_s,left , mid);
		mergeSort_x(arr,arr_s, mid + 1, right);
		merge_x(arr, arr_s, left, mid, right);
	}
}

void merge_y(point arr[], int left, int mid, int right)
{
	int* arr_s = (int*)malloc(sizeof(int)*(right - left + 1));

	int i = left;
	int j = mid + 1;
	int k = left;

	while (i <= mid && j <= right)
	{
		if (arr[i].y <= arr[j].y)
			arr_s[k++] = arr[i++].y;
		else
			arr_s[k++]= arr[j++].y;
	}

	if (i > mid)
	{
		for (int p = j; p <= right; p++)
			arr_s[k++] = arr[p].y;
	}
	else
	{
		for (int p = i; p <= mid; p++)
			arr_s[k++] = arr[p].y;
	}

	for (int i = left; i <= right; i++)
	{
		arr[i].y = arr_s[i];
	}

	free(arr_s);
}

void mergeSort_y(point arr[], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		mergeSort_y(arr, left, mid);
		mergeSort_y(arr, mid + 1, right);
		merge_y(arr, left, mid, right);
	}
}


int main()
{
	int n;
	int count = 0;
	
	cin >> n;
	point* arr_s = (point*)malloc(sizeof(point)*(100001));
	point* arr = (point*)malloc(sizeof(point)*n);
	
	for (int i = 0; i < n; i++)
		cin >> arr[i].x >> arr[i].y;

	mergeSort_x(arr,arr_s, 0, n - 1); //x°ª Á¤·Ä
	
	for (int i = 0; i < n-1; i++)
	{
		if (arr[i].x == arr[i + 1].x)
			count++;
		else if (count != 0)
		{
			mergeSort_y(arr, i, i + count);
			count = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i].x << arr[i].y << "\n";
	}

	free(arr);
	
	return 0;
}
