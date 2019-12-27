#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int num_divisor;
	int tmp;
	vector<int> divisor;

	cin >> num_divisor;
	for (int i = 0; i < num_divisor; i++)
	{
		cin >> tmp;
		divisor.push_back(tmp);
	}
	sort(divisor.begin(),divisor.end());

	cout << divisor[0] * divisor[num_divisor - 1];
	return 0;
}