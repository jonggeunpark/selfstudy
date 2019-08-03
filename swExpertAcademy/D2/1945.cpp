//swExpertAcademy
//1945

#include <iostream>
using namespace std;

int main()
{
	int t,num;
	int answer[5];
	cin >> t;

	for (int i = 1;i <= t;i++)
	{
		cin >> num;
		fill_n(answer, 5, 0);

		while (num != 1)
		{
			if (num % 2 == 0)
			{
				answer[0]++;
				num = num / 2;
			}
			else if (num % 3 == 0)
			{
				answer[1]++;
				num = num / 3;
			}
			else if (num % 5 == 0)
			{
				answer[2]++;
				num = num / 5;
			}
			else if (num % 7 == 0)
			{
				answer[3]++;
				num = num / 7;
			}
			else if (num % 11 == 0)
			{
				answer[4]++;
				num = num / 11;
			}
		}

		cout << "#" << i << " ";
		for (int i = 0;i < 5;i++)
			cout << answer[i] << " ";
		cout << endl;
	}
}