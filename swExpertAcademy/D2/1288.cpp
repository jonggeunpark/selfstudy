//swExpertAcademy
//1288

#include <iostream>
using namespace std;

int main()
{
	int t,num,tmp,answer,count;
	bool check[10];
	cin >> t;

	for (int i = 1;i <= t;i++)
	{
		fill_n(check, 10, false);
		count = 0;
		tmp = 1;

		cin >> num;

		while (1)
		{
			answer = num * tmp;

			tmp++;

			while (answer != 0)
			{
				if (check[answer % 10] == false)
				{
					check[answer % 10] = true;
					count++;
				}
				answer = answer / 10;
			}

			if (count == 10)
			{
				cout << "#" << i << " " << num * (tmp-1) << endl;
				break;
			}
		}
	}
	return 0;
}