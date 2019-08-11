//swExpertAcademy
//1213

#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int testcase,tmp,count;
	string str,find;

	for (int i = 1;i <= 10;i++) {
		cin >> testcase;
		cin >> find;
		cin >> str;

		count = 0;

		for (int j = 0;j < str.length();j++) 
		{
			tmp = 0;
			if (find[0] == str[j]) 
			{
				for (int k = 0, p = j; k < find.length();k++,p++)
					if (find[k] == str[p]) 
						tmp++;
			}
			if (tmp == find.length())
				count++;
		}
		cout << "#" << testcase << " " << count << endl;
	}

	return 0;
}


