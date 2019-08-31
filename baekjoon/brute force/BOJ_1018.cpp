//Baekjoon online judge
//1018

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int coloring(int n,int m,string* s, char start)
{
	int count = 0;
	char now;

	for (int i = 0; i < n; i++)
	{
		now = start;
		for (int j = 0; j < m; j++)
		{
			if (s[i].at(j) != now)
				count++;

			if (now == 'W')
				now = 'B';
			else now = 'W';
		}

		if (start == 'W')
			start = 'B';
		else start = 'W';
	}

	return count;
}

int main()
{
	int n, m, count1, count2;
	char c,now,start;
	cin >> n >> m;
	string* s = new string[n];
	
	for (int i = 0; i < n; i++)
		cin >> s[i];


	count1 = coloring(n,m,s, 'W');
	count2 = coloring(n,m,s, 'B');

	if (count1 < count2)
		cout << count1;
	else cout << count2;
	

	return 0;
}