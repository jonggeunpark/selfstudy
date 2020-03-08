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
        if (!pq.empty() && time >= pq.top().first) // ���� ���� �۾��̶��
        {
            // �۾� �ð��� ���� ������ Ȯ��
            if (pq.top().second < least_second) // ���� �۴ٸ� 
            {
                least_first = pq.top().first;
                least_second = pq.top().second;
                tmp.push(pq.top());
                pq.pop();
            }
            else // ���� ������
            {
                tmp.push(pq.top());
                pq.pop();
            }
        }
        else  if (least_second != 1001) // ���� ������ �۾��� �� �̻� ������
        {
            while (!tmp.empty())
            {
                if (tmp.top().first == least_first && tmp.top().second == least_second) // ������ �۾��̶�� ť�� ���� �ʰ� ����
                {
                    answer += time - least_first + least_second;
                    time += least_second;
                    index++;
                    tmp.pop();
                }
                else // �������� ���� �۾��̶�� �ٽ� ť�� ����
                {
                    pq.push(tmp.top());
                    tmp.pop();
                }
            }
            least_second = 1001;
        }
        else if (least_second == 1001) // ���� �� 
            time = pq.top().first;
    }

    return answer/jobs.size();
}