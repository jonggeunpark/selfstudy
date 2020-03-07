#include <string>
#include <vector>
using namespace std;

int solution(string arrangement) {

    int answer = 0;
    int num_bar = 0;
    bool is_razer;

    for (int i = 0; i < arrangement.size(); i++)
    {
        if (arrangement[i] == '(') // 여는 괄호
        {
            if (arrangement[i + 1] == ')') // 레이져
            {
                answer += num_bar;
                is_razer = true;
            }
            else // 막대기
            {
                num_bar++;
            }
        }
        else // 닫는 괄호
        {
            if (is_razer == true) // 레이져
            {
                is_razer = false;
            }
            else // 막대기
            {
                answer++;
                num_bar--;
            }

        }
    }
    return answer;
}