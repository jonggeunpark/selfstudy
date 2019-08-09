//swExpertAcademy
//2005

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int t,n,size,index,floor,ff,lf;
	vector<int> v;
	cin >> t;

	for (int i = 1; i <= t;i++) {
		v.clear();
		v.push_back(0);
		floor = 1;
		ff = 1;
		lf = 1;
		size = 0;

		cin >> n;

		for (int j = 1;j <= n;j++)
			size += j;

		for (int j = 1; j <= size;j++) {
			if (j == ff && j == lf) {
				v.push_back(1);
				ff += floor;
				lf += floor + 1;
				floor++;
			}
			else if (j == ff) {
				v.push_back(1);
				ff += floor;
			}
			else if (j == lf) {
				v.push_back(1);
				lf += floor + 1;
				floor++;
			}
			else
				v.push_back(v[j - floor] + v[j - floor + 1]);
		}

		lf = 1;
		floor = 1;

		cout << "#" << i << endl;

		for (int i = 1;i <= size;i++) {
			cout << v[i] << " ";
			if (i == lf) {
				cout << endl;
				lf += floor + 1;
				floor ++;
			}
		}
	}

	return 0;

}