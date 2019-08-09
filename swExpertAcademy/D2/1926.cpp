//swExpertAcademy
//1926

#include<iostream>
using namespace std;

int main()
{
	int n,j,num,count;
	bool check;
	cin >> n;

	for (int i = 1;i <= n;i++) {
		count = 0;
		check = false;

		for (int j = i; j != 0;j = j / 10) {

			num = j % 10;

			if (num == 3 || num == 6 || num == 9) {
				count++;
				check = true;
			}
		}

		for (int k = 0;k < count;k++) {
			cout << "-";
		}

		if (check == true)
			cout << " ";
		else
			cout << i << " ";

	}
	return 0;
}
