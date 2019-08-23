//Baekjoon online judge
//2908

#include <iostream>
#include <string>
using namespace std;

int reverse(string s)
{
	char tmp;
	for (int i = 0; i < s.size() / 2; i++)
	{
		tmp = s[i];
		s[i] = s[s.size() - 1 - i];
		s[s.size() - 1 - i] = tmp;
	}

	return stoi(s);
}

int main()
{
	string a, b;
	int ai, bi;

	cin >> a >> b;

	ai = reverse(a);
	bi = reverse(b);

	if (ai > bi)
		cout << ai;
	else
		cout << bi;

	return 0;
}