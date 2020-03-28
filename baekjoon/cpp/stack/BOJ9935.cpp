#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	string bomb;
	vector<char> v;
	stack<char> s1;
	stack<char> s2;
	
	cin >> str;
	cin >> bomb;

	for (int i = 0; i < str.size(); i++)
	{
		s1.push(str[i]);

		if (s1.top() == bomb[bomb.size() - 1]) // 폭탄의 마지막 글자라면
		{
			while (1)
			{
				// s1의 top 원소를 s2로 옮김
				s2.push(s1.top());
				s1.pop();

				if (s2.size() == bomb.size()) // 폭탄이 완성되었다면, s2를 비움
				{
					stack<char> empty_s;
					swap(s2, empty_s);
					break;
				}
				else if (s1.empty() || s1.top() != bomb[bomb.size() - s2.size() - 1] ) // 폭탄이 아니였다면(s1이 비어있거나,bomb와 다른 원소가 나옴), s2의 원소를 s1으로 옮김
				{
					while (!s2.empty())
					{
						s1.push(s2.top());
						s2.pop();
					}
					break;
				}
			}
		}
	}

	if (s1.empty()) // 전부 폭발
		cout << "FRULA";
	else // 스택에 남아있는 원소 출력
	{
		while (!s1.empty())
		{
			v.push_back(s1.top());
			s1.pop();
		}

		reverse(v.begin(), v.end());

		for (int i = 0; i < v.size(); i++)
			cout << v[i];
	}

	return 0;
}