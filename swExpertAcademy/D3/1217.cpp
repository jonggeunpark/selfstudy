//swExpertAcademy
//1217

#include <iostream>
using namespace std;

int getN(int n, int m)
{
	if (m == 0)
		return 1;
	else
		return n * getN(n, m - 1);
}

int main()
{
	int n, m, testcase;
	for (int i = 1;i <= 10;i++)
	{
		cin >> testcase;
		cin >> n >> m;
		cout << "#" << testcase << " " << getN(n, m) << endl;
	}
	return 0;
}
