//swExpertAcademy
//1984

#include <iostream>
using namespace std;

int main()
{
	int t,n,answer;

	cin >> t;


	for (int i = 1; i <= t; i++) {

		cin >> n;

		for (int j = 1;j <= n;j++) {
			if (n % 2 == 0)
				answer = -n / 2;
			else if (n % 2 == 1)
				answer = (n + 1) / 2;
		}

		cout << "#" << i << " " << answer << endl;
	}
	return 0;
}
