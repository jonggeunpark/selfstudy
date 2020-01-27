//Baekjoon online judge
//11720

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	string s;
	cin >> n;
	cin >> s;

	for (int i = 0; i < n; i++)
		sum += s[i] - 48;
	cout << sum;
	return 0;
}