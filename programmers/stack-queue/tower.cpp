// programmers
// level 2
#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> heights) {
    
    vector<int> answer;
    answer.assign(heights.size(), 0);
    
    for (int i = 0; i < heights.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (heights[j] > heights[i])
                answer[i] = j + 1;
        }
    }

    return answer;
}