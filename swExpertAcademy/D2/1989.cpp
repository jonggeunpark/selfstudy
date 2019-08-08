//swExpertAcademy
//1989

#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int t;
	bool check;
	string s;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		check = true;
		cin >> s;

		for (int j = 0;j < s.length() / 2;j++) {
			if (s[j] != s[s.length() - j-1])
				check = false;
		}

		cout << "#" << i << " ";
		if (check == true)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}

	return 0;
}