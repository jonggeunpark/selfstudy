//swExpertAcademy
//1970

#include <iostream>
using namespace std;

int main() 
{
	int t,money;
	cin >> t;
	int answer[8];
	for (int i = 1;i <= t;i++) {
		
		fill_n(answer, 8, 0);
		
		cin >> money;

		answer[0] = money / 50000;
		money = money % 50000;
		answer[1] = money / 10000;
		money = money % 10000;
		answer[2] = money / 5000;
		money = money % 5000;
		answer[3] = money / 1000;
		money = money % 1000;
		answer[4] = money / 500;
		money = money % 500;
		answer[5] = money / 100;
		money = money % 100;
		answer[6] = money / 50;
		money = money % 50;
		answer[7] = money / 10;
		money = money % 10;

		cout << "#" << i << endl;
		for (int i = 0;i < sizeof(answer) / sizeof(answer[0]);i++)
			cout << answer[i] << " ";
		cout << endl;
	}

	return 0;
}