//swExpertAcademy
//1966

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t,n,tmp,input;
	vector<int> num;
	cin >> t;

	for (int i = 1;i <= t;i++) {

		num.clear();
		tmp = 0;

		cin >> n;

		for (int j = 0;j < n;j++) {
			cin >> input;
			num.push_back(input);
		}

		for (int k = 0;k < n - 1;k++) {
			for (int p = 0;p < n - k - 1;p++) {
				if (num[p] > num[p + 1]) {
					tmp = num[p];
					num[p] = num[p + 1];
					num[p + 1] = tmp;
				}
			}
		}

		cout << "#" << i << " ";
		for (int i = 0;i < n;i++)
			cout << num[i] << " ";
		cout << endl;
	}
}