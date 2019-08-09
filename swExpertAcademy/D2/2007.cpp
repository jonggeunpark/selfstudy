//swExpertAcademy
//2007

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, answer;
	bool check;
	string s;
	string tmp;
	cin >> t;

	for(int i=1;i<=t;i++){
		cin >> s;
		check = false;
		for (int j = 1;j < s.length();j++) {
			if (s[j] == s[0]) {
				tmp = s.substr(0, j);
				if (tmp == s.substr(j, j) && check == false) {
					answer = tmp.length();
					check = true;
				}
			}
		}
		cout << "#" << i << " " << answer << endl;
	}

	return 0;
}