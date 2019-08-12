//swExpertAcademy
//1216

#include <iostream>
using namespace std;
#define SIZE 100

int main()
{
	int t, tmp, answer,length;
	bool check;
	char alp;
	char board[SIZE][SIZE];

	for (int i = 0;i < 10;i++) 
	{
		tmp = 0;
		cin >> t;
		for (int j = 0;j < SIZE;j++)
		{
			for (int p = 0;p < SIZE;p++)
			{
				cin >> alp;
				board[j][p] = alp;
			}
		}

		for (int j = 0;j < SIZE;j++) 
			for (int p = 0;p < SIZE;p++)
				for (int length = 1;p + length - 1 < SIZE;length++)
				{
					check = true;

					for (int q = 0;q < length/2;q++)
						if (board[j][p+q] != board[j][p+length-q-1]) 
						{
							check = false;
							break;
						}

					if (check == true)
						if (length > tmp)
							tmp = length;
				}
		
		
		for (int j = 0;j < SIZE;j++)
			for (int p = 0;p < SIZE;p++)
				for (int length = 1;p + length - 1 < SIZE;length++)
				{
					check = true;

					for (int q = 0;q < length / 2;q++)
						if (board[p+q][j] != board[p + length -q- 1][j])
						{
							check = false;
							break;
						}

					if (check == true)
						if (length > tmp)
							tmp = length;
				}
		cout << "#" << t << " " << tmp << endl;
	}
	return 0;
}
