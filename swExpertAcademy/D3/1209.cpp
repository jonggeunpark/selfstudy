//swExpertAcademy
//1209

#include <iostream>
using namespace std;

int main()
{
	int num, max, tmp, testcase;
	int arr[100][100];

	for (int i = 1;i <= 10;i++) {
		max = 0;
		
		cin >> testcase;

		for (int j = 0;j < 100;j++, tmp = 0) {
			for (int k = 0;k < 100;k++) {
				cin >> num;
				arr[j][k] = num;
				tmp += arr[j][k];
			}
			if (tmp > max)
				max = tmp;
		}

		for (int j = 0;j < 100;j++, tmp = 0) {
			for (int k = 0;k < 100;k++) {
				tmp += arr[k][j];
			}
			if (tmp > max)
				max = tmp;
		}

		for (int j = 0;j < 100;j++, tmp = 0) {
			tmp += arr[j][j];
		}
		if (tmp > max)
			max = tmp;

		for (int j = 0;j < 100;j++, tmp = 0) {
			tmp += arr[j][100-j-1];
		}
		if (tmp > max)
			max = tmp;

		cout << "#" << testcase << " " << max << endl;
	}

	return 0;
}