//swExpertAcademy
//2029

#include <iostream>
using namespace std;

int main()
{
	int T;
	int a, b;

	cin >> T;

	for (int i = 1; i <= T;i++)
	{
		cin >> a >> b;

		cout << "#" << i << " " << a / b << " " << a % b << endl;
	}

	return 0;
}