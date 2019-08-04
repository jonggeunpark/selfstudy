//swExpertAcademy
//1946

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	int num;
	char ci;
	int ki;
	vector<char> c;

	cin >> t;

	for (int i = 1;i <= t;i++)
	{
		c.clear();
		cin >> num;

		for (int j = 0;j < num;j++)
		{
			cin >> ci;
			cin >> ki;

			for (int k = 0;k < ki;k++)
			{
				c.push_back(ci);
			}
		}

		cout << "#" << i << endl;
		for (int p = 0;p < c.size();p++)
		{
			cout << c[p];
			if (p % 10 == 9)
				cout << endl;
		}
		cout << endl;
	}
	return 0;
}
