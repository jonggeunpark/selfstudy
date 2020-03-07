#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    int first = 0;
    int second = 0;
    priority_queue<int, vector<int>, greater<int>> h;

    for (int i = 0; i < scoville.size(); i++)
        h.push(scoville[i]);

    while (h.empty() == false && h.top() < K)
    {
        if (h.size() == 1)
            return -1;
        else 
        {
            first = h.top();
            h.pop();
            second = h.top();
            h.pop();
            h.push(first + second * 2);
            answer++;
        }
    }
    return answer;
}