//Baekjoon online judge
//1003

#include <iostream>
using namespace std;

int mem[41] = { 0, };

int fibonacci(int n)
{
	mem[0] = 0;
	mem[1] = 1;
	mem[2] = 1;

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (mem[n] != 0)
		return mem[n];

	return mem[n] = fibonacci(n - 1) + fibonacci(n - 2);
}	

int main()
{
	int t, n;
	cin >> t;

	fibonacci(40);

	for (int i = 0; i < t; i++)
	{
		cin >> n;

		if (n == 0)
			cout << "1 0" << "\n";
		else if (n == 1)
			cout << "0 1" << "\n";
		else
			cout << mem[n-1] << " " << mem[n] << "\n";
	}
	return 0;
}