//swExpertAcademy
//3131

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	bool check;
	for (int i = 2;i <= pow(10, 6);i++)
	{
		check = true;
		for (int j = 2;j < i;j++)
			if (i % j == 0)
			{
				check = false;
				break;
			}
		if (check == true)
			cout << i << " ";
	}
	return 0;
}