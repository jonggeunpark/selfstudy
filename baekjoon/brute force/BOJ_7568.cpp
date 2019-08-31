//Baekjoon online judge
//7568

#include <iostream>
#include <vector>
using namespace std;

struct student
{
	int height;
	int weight;
	int rank = 1;
};

int main()
{
	int n, x, y;
	int this_rank = 1;
	cin >> n;
	vector<student> s;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		s.push_back(student{ x,y });
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (s[i].height < s[j].height && s[i].weight < s[j].weight)
				s[i].rank++;
		}
		cout << s[i].rank << " ";
	}

	return 0;
}