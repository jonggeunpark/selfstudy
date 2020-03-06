#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int index = 0;
    int distribute = 0;
    double date;
    bool flag = false;

    while (index < progresses.size())
    {
        if (flag == false)
        {
            date = ceil(100 - double(progresses[index]) / double(speeds[index]));
            distribute++;
            index++;
            flag = true;
        }
        else if (date * speeds[index] + progresses[index] >= 100)
        {
            distribute++;
            index++;
        }
        else
        {
            flag = false;

            answer.push_back(distribute);
            distribute = 0;
        }
    }

    answer.push_back(distribute);
    return answer;
}