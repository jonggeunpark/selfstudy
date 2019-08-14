//swExpertAcademy
//1289

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n,count;
	vector<char> v;
	string s;

	cin >> n;

	for(int i=1;i<=n;i++)
	{
		v.clear();
		count = 0;

		cin >> s;
		
		for (int j = 0;j < s.length();j++)
			v.push_back('0');

		for (int j = 0;j < s.length();j++)
		{
			if (v[j] != s[j])
			{
				for (int k = j;k < s.length();k++)
					v[k] = s[j];

				count++;
			}
		}
		cout << "#" << i << " " << count << endl;
	}

	return 0;
}