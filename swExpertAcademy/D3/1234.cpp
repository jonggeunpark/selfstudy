//swExpertAcademy
//1234

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int length;
	bool check;
	string s;

	for (int i = 1;i <= 10;i++)
	{
		check = false;
		cin >> length >> s;

		while (check == false)
		{
			check = true;

			for (int i = 0;i < length;i++)
				if (s[i] == s[i + 1])
				{
					for (int j = i;0 < length - j - 2;j++)
						s[j] = s[j + 2];
					check = false;
					length -= 2;
					i = 0;
				}
		}
		cout << "#" << i << " ";
		for (int k = 0; k < length;k++)
			cout << s[k];
		cout << endl;
	}
	return 0;
}
