#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int stock, vector<int> dates, vector<int> supplies, int k) {

    int answer = 0;
    int index = 0;
    priority_queue<int, vector<int>, less<int>> pq;

    while (stock < k)
    {
        for (int i = index; index < dates.size();i++)
        {
            if (dates[i] > stock)
                break;
            else
            {
                pq.push(supplies[i]);
                index++;
            }
        }
        stock += pq.top();
        pq.pop();
        answer++;
    }

    return answer;
}
