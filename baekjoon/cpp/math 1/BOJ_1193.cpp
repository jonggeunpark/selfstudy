#include <iostream>
#include <string>
using namespace std;

int main()
{
	int floor = 1;
	int index = 1;
	int far;
	long x;
	cin >> x;

	while (1)
	{
		if (index >= x)
			break;

		floor++;
		index += floor;
	}

	far = x + floor - index;
	
	if (floor % 2 == 0)
		cout << far << "/" << floor+1 - far;
	else
		cout << floor+1 - far << "/" << far;

	return 0;
}