//Baekjoon online judge
//1002

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double t, x1, y1, x2, y2, r1, r2;
	double r3,ans;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		r3 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

		if (r3 == 0 && r1 == r2) // 일치
			ans = -1;
		else if (abs(r1 - r2) > r3) // 내부에서 떨어져있을 때
			ans = 0;
		else if (r1 + r2 == r3) // 외접
			ans = 1;
		else if (abs(r1 - r2) == r3) // 내접
			ans = 1;
		else if (r1 + r2 < r3) // 외부에서 떨어져있을 때
			ans = 0;
		else if (r1 + r2 > r3) // 나머지
			ans = 2;

		cout << ans << endl;
	}

	return 0;
}
