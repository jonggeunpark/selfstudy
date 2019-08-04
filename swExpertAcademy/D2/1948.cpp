//swExpertAcademy
//1948

#include <iostream>
using namespace std;

int main()
{
	int t;
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int m1, m2, d1, d2;
	int answer;
	cin >> t;
	
	for (int i = 1;i <= t;i++)
	{
		answer = 0;
		cin >> m1;
		cin >> d1;
		cin >> m2;
		cin >> d2;

		for (int j = 0;j < m2-1;j++)
			answer += month[j];
		answer += d2;

		for (int k = 0;k < m1 - 1;k++)
			answer -= month[k];
		answer -= d1;

		cout << "#" << i << " " << answer+1 << endl;
	}
	return 0;
}