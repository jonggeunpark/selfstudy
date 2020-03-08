#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> operations) {

    int i_number;
    string s_number;
    vector<int> answer;
    vector<int> v;

    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i][0] == 'I') // 삽입
        {
            for (int j = 2; j < operations[i].size(); j++)
            {
                s_number.push_back(operations[i][j]);
            }

            i_number = stoi(s_number);
            v.push_back(i_number);
            s_number.clear();
        }
        else if (operations[i][0] == 'D') // 삭제
        {
            if (!v.empty())
            {
                sort(v.begin(), v.end()); // 오름차순 정렬 

                if (operations[i][2] == '1') // 최대값 삭제
                {
                    v.pop_back();
                }
                else // 최소값 삭제
                {
                    v.erase(v.begin());
                }
            }
        }
    }
    sort(v.begin(), v.end());

    if (v.empty())
    {
        answer.push_back(0);
        answer.push_back(0);
    }
    else
    {
        answer.push_back(v[v.size() - 1]);
        answer.push_back(v[0]);
    }
    return answer;
}