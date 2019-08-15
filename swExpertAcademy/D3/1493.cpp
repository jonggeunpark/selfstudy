//swExpertAcademy
//1493

#include <iostream>
using namespace std;
#define SIZE 300

int main()
{
	long arr[SIZE][SIZE] = { 0, };
	int t, p, q;
	long index = 1;
	long floor = 1;
	int p_x, p_y, q_x, q_y;
	index = 1;
	floor = 2;

	cin >> t;

	for (int i = 1;i < SIZE;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			arr[j][floor-j] = index++;
		}
		floor++;
	}
	
	for (int i = 1;i <= t;i++)
	{
		cin >> p >> q;
		
		for(int i=1;i<SIZE;i++)
			for (int j = 1;j < SIZE;j++)
			{
				if (arr[j][i] == p)
				{
					p_x = j;
					p_y = i;
				}

				if (arr[j][i] == q)
				{
					q_x = j;
					q_y = i;
				}
			}

		cout << "#" << i << " " << arr[p_x + q_x][p_y + q_y] << endl;
	}
	return 0;
}