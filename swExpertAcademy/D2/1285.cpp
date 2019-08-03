//swExpertAcademy
//1285

#include <iostream>
using namespace std;

int main()
{
	int a,t, num, tmp, count;
	bool check;

	cin >> t;

	for (int i = 1;i <= t;i++)
	{
		check = false;
		count = 0;

		cin >> num;
		
		for (int j = 0;j < num;j++)
		{
			cin >> a;
			
			if (abs(a) < tmp || check == false)
			{
				tmp = abs(a);
				count = 1;
				check = true;
			}
			else if (abs(a) == tmp)
				count++;
		}

		cout << "#" << i << " " << tmp << " " << count << endl;
	}

	return 0;
}