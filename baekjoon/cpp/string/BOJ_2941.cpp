//Baekjoon online judge
//2941

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '=')
		{
			if (s[i - 1] == 'c' || s[i - 1] == 's')
				count++;
			else if (s[i - 1] == 'z')
				if (i < 2)
					count++;
				else if (s[i - 2] == 'd')
					count += 2;
				else count++;
		}
		else if (s[i] == '-')
		{
			if (s[i - 1] == 'c' || s[i - 1] == 'd')
				count++;
		}
		else if (s[i] == 'j')
		{
			if (s[i - 1] == 'l' || s[i - 1] == 'n')
				count++;
		}
	}

	cout << s.size() - count;

	return 0;
}