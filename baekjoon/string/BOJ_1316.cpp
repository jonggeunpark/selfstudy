#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num_str, answer;
	string s;
	bool check_alp[26];

	cin >> num_str;
	answer = num_str;
	
	for (int i = 0; i < num_str; i++)
	{
		fill_n(check_alp, 26, false);
		cin >> s;
		check_alp[s[0] - 97] = true;

		for (int j = 0; j < s.size()-1; j++)
		{
			if (s[j] != s[j + 1])
			{
				if (check_alp[s[j + 1] - 97] == true)
				{
					answer--;
					break;
				}
				else
					check_alp[s[j + 1] - 97] = true;
			}
		}
	}

	cout << answer;
	return 0;
}
