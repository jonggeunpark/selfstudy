//swExpertAcademy
//2805
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t,length,num,count;

	cin >> t;

	for (int i = 1; i <= t;i++)
	{
		count = 0;
		cin >> length;
		vector<vector<int >> v(length,vector<int>(length));

		for(int i=0;i<length;i++)
			for (int j = 0;j < length;j++)
			{
				scanf("%1d", &num);
				v[i][j] = num;
			}

		for (int i = 0;i < length;i++)
			if(i <= length/2)
				for (int j = length / 2 - i;j <= length / 2 + i;j++)
					count += v[i][j];
			else
				for (int j = length / 2 - (length-i-1);j <= length / 2 + (length-i-1);j++)
					count += v[i][j];
	
		cout << "#" << i << " " << count << endl;
	}
	return 0;
}