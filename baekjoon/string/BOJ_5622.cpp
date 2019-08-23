//Baekjoon online judge
//5622

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		switch (s[i])
		{
		case 'A':case 'B':case 'C':
			count += 3;
			break;
		case 'D':case 'E':case 'F':
			count += 4;
			break;
		case 'G':case 'H':case 'I':
			count += 5;
			break;
		case 'J':case 'K':case 'L':
			count += 6;
			break;
		case 'M':case 'N':case 'O':
			count += 7;
			break;
		case 'P':case 'Q':case 'R':case 'S':
			count += 8;
			break;
		case 'T':case 'U':case 'V':
			count += 9;
			break;
		case 'W':case 'X':case 'Y':case 'Z':
			count += 10;
			break;
		default:
			count += 1;
			break;
		}
	}
	cout << count;
	return 0;
}