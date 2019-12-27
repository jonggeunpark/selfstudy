#include <iostream>
#include <vector>
using namespace std;

vector<int> answer;

int div(int num)
{
	if (num == 1)
		return 1;
	else
	{
		for (int i = 2; i <= num; i++)
		{
			if (num % i == 0)
			{
				answer.push_back(i);
				return div(num / i);
			}
		}
	}
}

int main()
{
	int num;
	cin >> num;

	div(num);

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << endl;
	}

	return 0;
}