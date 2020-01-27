//Baekjoon online judge
//2675

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t,r;
	string s;
	string p;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		p.clear();
		cin >> r >> s;

		for (int j = 0; j < s.size(); j++)
			for (int k = 0; k < r; k++)
				p.push_back(s.at(j));

		cout << p << endl;
	}

	return 0;
}