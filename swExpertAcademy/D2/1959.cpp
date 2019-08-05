//swExpertAcademy
//1959

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t,n,m;
	cin >> t;
	int tmp, sum, answer;
	bool tf;
	vector<int> ai;
	vector<int> bj;

	for (int i = 1;i <= t;i++) {
		cin >> n >> m;

		ai.clear();
		bj.clear();
		sum = 0;
		answer = 0;
		tf = false;

		for (int j = 0;j < n;j++) {
			cin >> tmp;
			ai.push_back(tmp);
		}

		for (int k = 0;k < m;k++) {
			cin >> tmp;
			bj.push_back(tmp);
		}

		if (n > m)	{
			for (int p = 0;p < n-m+1;p++) {
				for (int q = p;q < m + p;q++) {
					sum += ai[q] * bj[q-p];
				}

				if (sum > answer || tf == false) {
					answer = sum;
					tf = true;
				}
				sum = 0;
			}
		}
		else if (n <= m) {
			for (int p = 0;p < m - n+1;p++) {
				for (int q = p;q < n + p;q++) {


					sum += ai[q-p] * bj[q];
				}

				if (sum > answer || tf == false) {
					answer = sum;
					tf = true;
				}
				sum = 0;
			}
		}
		cout << "#" << i << " " << answer << endl;
	}
	return 0;
}