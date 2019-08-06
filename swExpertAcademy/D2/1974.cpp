//swExpertAcademy
//1974

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t,num;
	int arr[9][9];
	cin >> t;
	bool check[9];
	bool check2[9];
	bool check3[9];
	int count;
	int answer;

	for (int i = 1;i <= t;i++) {
		
		answer = 1;

		for (int j = 0;j < 9;j++) {
			for (int k = 0; k < 9;k++) {
				cin >> num;

				arr[j][k] = num;
			}
		}

		for (int j = 0;j < 9;j++) {

			fill_n(check, 9, false);
			fill_n(check2, 9, false);
			fill_n(check3, 9, false);

			for (int k = 0; k < 9;k++) {
				
				if (check[arr[j][k]-1] == false)
					check[arr[j][k]-1] = true;
				else
					answer = 0;

				if (check2[arr[k][j]-1] == false)
					check2[arr[k][j]-1] = true;
				else
					answer = 0;

				if (j % 3 == 0 && k % 3 == 0) {
					for (int p = j;p < j + 3;p++) {
						for (int q = k; q < k + 3;q++) {
							if (check3[arr[p][q] - 1] == false)
								check3[arr[p][q] - 1] = true;
							else
								answer = 0;
						}
					}
				}
			}
		}


		cout << "#" << i << " " << answer << endl;
	}


	return 0;
}

