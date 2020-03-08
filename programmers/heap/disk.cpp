#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> jobs) {
    
    int index = 0;
    int time = 0;
    int answer = 0;
    int least_second = 1001;
    int least_first = 0;
    priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> tmp;

    for (int i = 0; i < jobs.size(); i++)
        pq.push(make_pair(jobs[i][0], jobs[i][1]));

    while (index < jobs.size())
    {
        if (!pq.empty() && time >= pq.top().first) // 실행 가능 작업이라면
        {
            // 작업 시간이 가장 적은지 확인
            if (pq.top().second < least_second) // 가장 작다면 
            {
                least_first = pq.top().first;
                least_second = pq.top().second;
                tmp.push(pq.top());
                pq.pop();
            }
            else // 작지 않으면
            {
                tmp.push(pq.top());
                pq.pop();
            }
        }
        else  if (least_second != 1001) // 실행 가능한 작업이 더 이상 없으면
        {
            while (!tmp.empty())
            {
                if (tmp.top().first == least_first && tmp.top().second == least_second) // 실행한 작업이라면 큐에 넣지 않고 제거
                {
                    answer += time - least_first + least_second;
                    time += least_second;
                    index++;
                    tmp.pop();
                }
                else // 실행하지 않은 작업이라면 다시 큐에 넣음
                {
                    pq.push(tmp.top());
                    tmp.pop();
                }
            }
            least_second = 1001;
        }
        else if (least_second == 1001) // 유휴 중 
            time = pq.top().first;
    }

    return answer/jobs.size();
}