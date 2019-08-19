//Baekjoon online judge
//8958

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, count,score;
	string s;
	cin >> t;

	for (int i = 0;i < t;i++)
	{
		count = 0;
		score = 0;
		cin >> s;

		for (int j = 0;j < s.length();j++)
		{
			if (s[j] == 'O')
			{
				count++;
				score += count;
			}
			else if (s[j] == 'X')
				count = 0;
			else
				break;
		}

		cout << score << endl;
	}

	return 0;
}