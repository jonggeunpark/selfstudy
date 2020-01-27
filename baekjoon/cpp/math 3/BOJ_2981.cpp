#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,a,count;
	vector<int> number;
	vector<int> answer;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		number.push_back(a);
	}
	sort(number.begin(), number.end());

	for (int i = 2; i < number[number.size()-1]; i++)
	{
		a = number[0] % i;
		count = 1;

		for (int j = 1; j < number.size(); j++)
		{
			if (number[j] % i == a)
				count++;
		}

		if (count == number.size())
			answer.push_back(i);
	}

	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << ' ';

	return 0;
}