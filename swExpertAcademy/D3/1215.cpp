//swExpertAcademy
//1215

#include <iostream>
using namespace std;

int main()
{
	int length,count;
	char alp;
	char board[8][8];
	bool check;

	for (int i = 1;i <= 10;i++) 
	{
		count = 0;
		cin >> length;
		for (int i = 0;i < 8;i++)
		{
			for (int j = 0;j < 8;j++)
			{
				cin >> alp;
				board[i][j] = alp;
			}
		}

		for (int i = 0;i < 8;i++)
		{
			for (int j = 0;j <= 8 - length;j++)
			{
				check = true;
				for (int p = 0;p < length/2;p++) {
 					if (board[i][j+p] != board[i][j + length - p-1]) {
						check = false;
						break;
					}
				}
				if (check == true)
					count++;
			}
		}

		for (int i = 0;i < 8;i++)
		{
			for (int j = 0;j <= 8 - length;j++)
			{
				check = true;
				for (int p = 0;p < length/2;p++) {
					if (board[j+p][i] != board[j + length - p-1 ][i]) {
						check = false;
						break;
					}
				}
				if (check == true)
					count++;
			}
		}

		if (length == 1)
			count /= 2;

		cout << "#" << i << " " << count << endl;
	}
	return 0;
}