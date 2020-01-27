//Baekjoon online judge
//2292

#include <iostream>
using namespace std;

int main()
{
	int n;
	int floor = 1;
	int start = 1;

	cin >> n;
	while (1)
	{
		if (start + (floor - 1) * 6 >= n)
			break;
		else
			start += (floor - 1) * 6;

		floor++;
	}
	cout << floor;

	return 0;
}