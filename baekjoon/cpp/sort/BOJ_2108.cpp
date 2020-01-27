//Baekjoon online judge
//2108
//계수 정렬

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void countingSort(int arr[],int sortedArr[],int count[],int n)
{
	//누적합
	for (int i = 1; i < 8001; i++)
		count[i] += count[i - 1];

	for (int i = n-1; i >= 0; i--)
	{
		count[arr[i] + 4000]--;
		sortedArr[count[arr[i]+4000]] = arr[i];
	}
}

int getMode(int count[])
{
	int mode = 0;
	int freq = 0;
	int freq_count = 0;

	for (int i = 0; i < 8001; i++)
	{
		if (count[i] > freq)
		{
			freq = count[i];
			mode = i - 4000;
			freq_count = 1;
		}
		else if (count[i] == freq && freq_count == 1)
		{
			mode = i - 4000;
			freq_count++;
		}
	}

	return mode;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n,tmp;
	double sum = 0;
	int max = -4001;
	int min = 4001;
	int median;
	int mode;
	int count[8001] = { 0, };

	cin >> n;

	int* arr = (int*)malloc(sizeof(int)*n);
	int* sortedArr = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		arr[i] = tmp;

		sum += tmp;
		count[tmp + 4000 ]++;
		if (tmp > max) max = tmp;
		if (tmp < min) min = tmp;
	}

	mode = getMode(count);// 최빈값 구하기 
	countingSort(arr,sortedArr,count,n); //계수 정렬
	median = sortedArr[n / 2]; // 중앙값 구하기

	cout << floor(sum / n + 0.5) << "\n";
	cout << median << "\n";
	cout << mode << "\n";
	cout << max - min;

	free(arr);
	free(sortedArr);
	return 0;
}
