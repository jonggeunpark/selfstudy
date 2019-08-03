//swExpertAcademy
//2052

#include <iostream>
using namespace std;

int main()
{
	int t;
	int date;
	int year,month, day;

	cin >> t;

	for (int i = 1;i <= t;i++)
	{
		cin >> date;
		cout << "#" << i << " ";

		if (sizeof(date)==32) // 8자리 검사
		{
			year = date / 10000;
			month = date / 100 % 100;
			day = date % 100;

			if (month == 1 	|| month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			{
				if (day >= 1 && day <= 31)
					cout << year << "/" << month << "/" << day << endl;
				else 
				{
					cout << "-1";
				}
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11)
			{
				if (day >= 1 && day <= 30)
					cout << year << "/" << month << "/" << day << endl;
				else
				{
					cout << "-1";
				}
			}
			else if (month == 2)
			{
				if (day >= 1 && day <= 28)
					cout << year << "/" << month << "/" << day << endl;
				else
				{
					cout << "-1";
				}
			}
			else
				cout << "-1";
		}
		else cout << "-1";
	}

	return 0;
}
