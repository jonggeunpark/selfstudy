//swExpertAcademy
//1204

#include <iostream>
using namespace std;

int main()
{
	const int studentSIZE = 1000;
	const int scoreSIZE = 101;
	int t;
	int numOfTest;
	int score[studentSIZE];
	int count[scoreSIZE];
	int tmp;
	int answer;

	cin >> t;

	for (int i = 1; i <= t;i++)
	{
		fill_n(count, scoreSIZE, 0);
		tmp = 0;
		cin >> numOfTest;

		for (int j = 0;j < studentSIZE;j++)
		{
			cin >> score[j];
			count[score[j]]++;
		}

		for (int k = 0;k < scoreSIZE;k++)
		{
			if (count[k] >= tmp) // �󵵼��� ���� ��� ���� ������ ����ؾ��ϹǷ� > �� �ƴ� >= ���
			{
				tmp = count[k];
				answer = k;
			}
		}
		cout << "#" << numOfTest << " " << answer << endl;
	}

	return 0;
}