//Baekjoon online judge
//1157

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	bool check = false;
	int max = 0;
	int max_index = 0;
	int alp[26] = { 0, };

	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		s[i] = toupper(s[i]);
		alp[s[i] - 65]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alp[i] > max)
		{
			max = alp[i];
			max_index = i;
			check = false;
		}
		else if (alp[i] == max)
			check = true;
	}

	if (check == true)
		cout << "?" ;
	else
		cout << char(max_index + 65) ;

	return 0;
}