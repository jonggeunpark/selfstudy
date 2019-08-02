//swExpertAcademy
//2072

#include <iostream>
using namespace std;

int main()
{
	int t, tmp;
	int num[10];
	cin >> t;

	for (int i = 1; i <= t;i++)
	{
		tmp = 0;
		for (int j = 0;j < 10;j++)
		{
			cin >> num[j];
			if(num[j]%2 == 1)
				tmp += num[j];
		}
		cout << "#" << i << " " << tmp << endl;
	}
	return 0;
}