//swExpertAcademy
//2058

#include<iostream>
using namespace std;

int main()
{
	int n;
	int tmp = 0;
	cin >> n;

	while (n % 10 != n)
	{
		tmp += n % 10;
		n = n / 10;
	}
	tmp += n;

	cout << tmp;
	return 0;
}