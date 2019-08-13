//swExpertAcademy
//1225

#include <iostream>
using namespace std;

int main()
{
	int t,num,tmp;
	int arr[8];
	for(int i=1;i<=10;i++)
	{
		cin >> t;
		for (int i = 0;i < 8;i++)
		{
			cin >> num;
			arr[i] = num;

		}
		for(int i=1;;i=i%5+1)
		{
			arr[0] -= i;
			tmp = arr[0];
			for (int i = 0;i < 7;i++)
				arr[i] = arr[i + 1];
			arr[7] = tmp;

			if (arr[7] <= 0)
			{
				arr[7] = 0;
				break;
			}
		}
		cout << "#" << i << " ";
		for (int i = 0; i < 8;i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}
