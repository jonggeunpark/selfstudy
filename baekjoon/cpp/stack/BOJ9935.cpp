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

		if (s1.top() == bomb[bomb.size() - 1]) // ��ź�� ������ ���ڶ��
		{
			while (1)
			{
				// s1�� top ���Ҹ� s2�� �ű�
				s2.push(s1.top());
				s1.pop();

				if (s2.size() == bomb.size()) // ��ź�� �ϼ��Ǿ��ٸ�, s2�� ���
				{
					stack<char> empty_s;
					swap(s2, empty_s);
					break;
				}
				else if (s1.empty() || s1.top() != bomb[bomb.size() - s2.size() - 1] ) // ��ź�� �ƴϿ��ٸ�(s1�� ����ְų�,bomb�� �ٸ� ���Ұ� ����), s2�� ���Ҹ� s1���� �ű�
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

	if (s1.empty()) // ���� ����
		cout << "FRULA";
	else // ���ÿ� �����ִ� ���� ���
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