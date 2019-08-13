//swExpertAcademy
//1221

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int t,testcase,length;
	int count[10];
	char sharp;
	string s;
	cin >> t;
	vector<int> v;

	for (int i = 1;i <= t;i++)
	{
		v.clear();
		fill_n(count, 10, 0);

		cin >> sharp >> testcase >> length;

		for (int j = 0;j < length;j++)
		{
			cin >> s;

			if (s == "ZRO") 
				count[0]++;
			else if (s == "ONE") 
				count[1]++;
			else if (s == "TWO")
				count[2]++;
			else if (s == "THR")
				count[3]++;
			else if (s == "FOR")
				count[4]++;
			else if (s == "FIV")
				count[5]++;
			else if (s == "SIX")
				count[6]++;
			else if (s == "SVN")
				count[7]++;
			else if (s == "EGT")
				count[8]++;
			else if (s == "NIN")
				count[9]++;
		}

		cout << "#" << i<<endl;

		for (int k = 0;k < count[0];k++)
			cout << "ZRO" << " ";
		for (int k = 0;k < count[1];k++)
			cout << "ONE" << " ";
		for (int k = 0;k < count[2];k++)
			cout << "TWO" << " ";
		for (int k = 0;k < count[3];k++)
			cout << "THR" << " ";
		for (int k = 0;k < count[4];k++)
			cout << "FOR" << " ";
		for (int k = 0;k < count[5];k++)
			cout << "FIV" << " ";
		for (int k = 0;k < count[6];k++)
			cout << "SIX" << " ";
		for (int k = 0;k < count[7];k++)
			cout << "SVN" << " ";
		for (int k = 0;k < count[8];k++)
			cout << "EGT" << " ";
		for (int k = 0;k < count[9];k++)
			cout << "NIN" << " ";
	}


	return 0;
}
