//Baekjoon online judge
//2839

#include <iostream>
using namespace std;

int main()
{
	int n,kg_3,kg_5;
	int answer = -1;
	cin >> n;

	for (kg_5 = 0; kg_5 * 5 <= n; kg_5++)
		if ((n - kg_5 * 5) % 3 == 0)
			answer = kg_5 + (n - kg_5 * 5) / 3;

	cout << answer;
	return 0;
}