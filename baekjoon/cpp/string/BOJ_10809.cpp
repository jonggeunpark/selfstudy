//Baekjoon online judge
//10809

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int alp[26];
	fill_n(alp, 26, -1);
	cin >> s;

	for (int i = 0; i < s.size(); i++)
		if (alp[s.at(i) - 97] == -1)
			alp[s.at(i) - 97] = i;

	for (int i = 0; i < 26; i++)
		cout << alp[i] << " ";

	return 0;
}