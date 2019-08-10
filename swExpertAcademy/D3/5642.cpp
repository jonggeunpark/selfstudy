//swExpertAcademy
//5642

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int	t,n,num,tmp,answer;
	vector<int> v;
	cin >> t;

	for (int i = 1;i <= t;i++) {
		v.clear();
		answer = NULL;
		cin >> n;

		for (int j = 0;j < n;j++) {
			cin >> num;
			v.push_back(num);
		}

		for (int k = 0;k < n;k++) {
			tmp = 0;
			for (int p = k;p < n;p++) {
				tmp += v[p];
				
				if (tmp > answer || answer == NULL)
					answer = tmp;
			}
		}

		cout << "#" << i << " " << answer << endl;
	}

	return 0;
}