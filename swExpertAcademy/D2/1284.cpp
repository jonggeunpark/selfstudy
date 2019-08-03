//swExpertAcademy
//1284

#include <iostream>
using namespace std;

int compare(int p, int q, int r, int s, int w)
{
	int a, b;

	a = p * w;

	if (w > r)
		b = q + (w - r)*s;
	else
		b = q;

	if (a > b)
		return b;
	if (a < b)
		return a;
}	

int main()
{
	int p, q, r, s, w;
	int t;

	cin >> t;

	for (int i = 1; i <= t;i++)
	{
		cin >> p >> q >> r >> s >> w;

		cout << "#" << i << " " << compare(p, q, r, s, w) << endl;
	}

	return 0;
}
