//Baekjoon online judge
//1152

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	string s;
	bool prevIsAlp = false;
	
	getline(cin, s);

	for (int i = 0; i < s.size(); i++)
	{
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
		{
			if (prevIsAlp == false)
				count++;

			prevIsAlp = true;
		}
		else
			prevIsAlp = false;
	}

	cout << count;
	return 0;
}
