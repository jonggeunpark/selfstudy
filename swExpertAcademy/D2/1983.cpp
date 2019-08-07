//swExpertAcademy
//1983

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t,N,K,rank;
	double mid, fin, hom , K_score, tmp,tmp2;
	vector<double> score;
	cin >> t;

	for (int i = 1;i <= t;i++) {
		cin >> N >> K;
		score.clear();

		for (int j = 0;j < N;j++) {
			cin >> mid >> fin >> hom;

			tmp2 = mid * 0.35 + fin * 0.45 + hom * 0.2;
			score.push_back(tmp2);

			if(j == K-1)
				K_score = tmp2;
		}

		for (int k = 0;k < N;k++) {
			for (int p = 0;p < N - k - 1;p++) {
				if (score[p] > score[p + 1]) {
					tmp = score[p];
					score[p] = score[p+1];
					score[p + 1] = tmp;
				}	
			}
		}

		for (int q = 0;q < N;q++)
			if (score[q] == K_score)
				rank = N - q;

		cout << "#" << i << " ";

		if (rank <= N / 10)
			cout << "A+" << endl;
		else if (rank <= N / 10 *2)
			cout << "A0" << endl;
		else if (rank <= N / 10 *3)
			cout << "A-" << endl;
		else if (rank <= N / 10 *4)
			cout << "B+" << endl;
		else if (rank <= N / 10 *5)
			cout << "B0" << endl;
		else if (rank <= N / 10 * 6)
			cout << "B-" << endl;
		else if (rank <= N / 10 * 7)
			cout << "C+" << endl;
		else if (rank <= N / 10 * 8)
			cout << "C0" << endl;
		else if (rank <= N / 10 *9)
			cout << "C-" << endl;
		else
			cout << "D0" << endl;
	}

	return 0;
}