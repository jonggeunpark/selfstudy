//swExpertAcademy
//2001

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t,n,m,num,answer,tmp;
	cin >> t;

	for (int i = 1;i <= t;i++) {

		answer = 0;
		cin >> n >> m;
		
		vector<vector<int> > board(n, vector<int>(n, 0));

		for (int j = 0;j < n;j++) {
			for (int k = 0;k < n;k++) {
				cin >> num;
				board[j][k] = num;
			}
		}

		for (int j = 0;j < n - m + 1;j++) {
			for (int k = 0;k < n - m + 1;k++) {
				tmp = 0;

				for (int p = j;p < j+m;p++) {
					for (int q = k; q < k + m;q++) {
						tmp += board[p][q];
					}
				}
				if (tmp > answer)
					answer = tmp;
			}
		}
		cout << "#" << i << " " << answer << endl;
	}
	return 0;
}

