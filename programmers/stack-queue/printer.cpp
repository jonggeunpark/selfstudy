#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include<queue>
using namespace std;

bool desc(int a, int b)
{
    return a > b;
}

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, bool> > q;

    for (int i = 0; i < priorities.size(); i++)
    {
        if(location == i)
            q.push(pair<int, bool>(priorities[i], true));
        else
            q.push(pair<int, bool>(priorities[i], false));
    }

    sort(priorities.begin(), priorities.end(), desc);

    while (q.empty() == false)
    {
        if (q.front().first != priorities[answer])
        {
            q.push(q.front());
            q.pop();
        }
        else
        {
            answer++;
            if (q.front().second == true)
            {
                return answer;
            }
            
            q.pop();
        }
    }
}

int main()
{
    vector<int> pri;

    pri.push_back(1);
    pri.push_back(1);
    pri.push_back(9);
    pri.push_back(1);
    pri.push_back(1);
    pri.push_back(1);

    cout << solution(pri, 0);
    return 0;
}