//swExpertAcademy
//1979

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t, N, K, num, count,answer;
	cin >> t;

	for (int i = 1;i <= t;i++) {

		answer = 0;
		cin >> N >> K;
		vector<vector<int> > board(N, vector<int>(N, 0));

		for(int j=0;j<N;j++)
			for (int k = 0; k < N;k++) {
				cin >> num;
				board[j][k] = num;
			}

		for (int j = 0;j < N;j++) // 가로줄
			for (int k = 0; k < N;k++) {
				count = 0;
				if (k == 0) {

					if (board[j][k] == 1) {
						for (int p = k; p < N && board[j][p] == 1 ;p++) {
							count++;
						}

						if (count == K) {
							answer++;
						}

					}
				}
				else if (board[j][k - 1] == 0) {

					if (board[j][k] == 1) {
						for (int p = k; p < N && board[j][p] == 1;p++) {
							count++;
						}

						if (count == K) {
							answer++;
						}

					}
				}
			}

		for (int j = 0;j < N;j++) // 세로줄
			for (int k = 0; k < N;k++) {
				count = 0;
				if (k == 0) {

					if (board[k][j] == 1) {
						for (int p = k;p < N && board[p][j] == 1 ;p++) {
							count++;
						}

						if (count == K) {
							answer++;
						}

					}
				}
				else if (board[k - 1][j] == 0) {

					if (board[k][j] == 1) {
						for (int p = k;p < N && board[p][j] == 1;p++) {
							count++;
						}

						if (count == K) {
							answer++;
						}

					}
				}
			}

		cout << "#" << i << " " << answer << endl;
	}

	return 0;
}