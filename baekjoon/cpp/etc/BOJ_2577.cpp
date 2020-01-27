//Baekjoon online judge
//2577

#include <iostream>
using namespace std;

int main()
{
	long a, b, c, num;
	int arr[10] = { 0, };

	cin >> a >> b >> c;
	num = a * b*c;

	while (1)
	{
		arr[num % 10] ++;
		num = num / 10;

		if (num == 0)
			break;
	}

	for (int i = 0;i < 10;i++)
		cout << arr[i] << endl;
	return 0;
}