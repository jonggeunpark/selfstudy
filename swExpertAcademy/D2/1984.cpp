//swExpertAcademy
//1984

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{	
	double t,num,tmp;
	vector<double> v;
	cin >> t;

	for (int i = 1;i <= t;i++) {
		v.clear();

		for (int i = 0;i < 10;i++) {
			cin >> num;
			v.push_back(num);
		}

		for (int j = 0;j < 10;j++) {
			for (int k = 0;k < 10 - j - 1;k++) {
				if (v[k] > v[k + 1]) {
					tmp = v[k];
					v[k] = v[k + 1];
					v[k + 1] = tmp;
				}
			}
		}

		tmp = 0;

		for (int p = 1;p < 9;p++) {
			tmp += v[p];
		}

		cout << "#" << i << " " << floor(tmp / 8 + 0.5) << endl;
	}

	return 0;
}
