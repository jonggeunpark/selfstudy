#include <iostream>
#include <string>
#include <ctype.h>
#include <math.h>
using namespace std;

int main()
{
	string exp;
	bool flag = true;
	int answer = 0;
	int tmp = 0;
	int count = 0;
	int fMinus = 0;

	cin >> exp;
	fMinus = exp.find("-");
	
	for (int i = exp.length(); i >= 0; i--)
	{
		if (fMinus == -1) // - 가 없다면
		{
			if (isdigit(exp[i]) != 0)
			{
				answer += (exp[i] - 48) * pow(10, count);
				count++;
			}
			else
				count = 0;

		}
		else // - 가 있다면
		{
			if (i > fMinus&& isdigit(exp[i]) != 0) // '-' 이후 숫자 tmp 에 더함
			{
				tmp += (exp[i] - 48) * pow(10, count);
				count++;
			}
			else if (i < fMinus && isdigit(exp[i]) != 0)
			{
				answer += (exp[i] - 48) * pow(10, count);
				count++;
			}
			else // 연산자라면
				count = 0;
		}
	}

	cout << answer - tmp;
	return 0;
}