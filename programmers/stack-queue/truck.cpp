#include <string>
#include <queue>
#include <vector>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {

    int answer = 0;
    int index = 0;
    int weight_now = 0;
    queue<int> q;

    while (index < truck_weights.size())
    {
        if (q.size() == bridge_length)
        {
            weight_now -= q.front();
            q.pop();
        }

        if (weight_now + truck_weights[index] <= weight)
        {
            q.push(truck_weights[index]);
            weight_now += truck_weights[index];
            index++;
        }
        else
            q.push(0);

        answer++;
    }

    return bridge_length + answer;
}