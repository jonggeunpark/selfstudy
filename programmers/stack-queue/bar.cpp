#include <string>
#include <vector>
using namespace std;

int solution(string arrangement) {

    int answer = 0;
    int num_bar = 0;
    bool is_razer;

    for (int i = 0; i < arrangement.size(); i++)
    {
        if (arrangement[i] == '(') // ���� ��ȣ
        {
            if (arrangement[i + 1] == ')') // ������
            {
                answer += num_bar;
                is_razer = true;
            }
            else // �����
            {
                num_bar++;
            }
        }
        else // �ݴ� ��ȣ
        {
            if (is_razer == true) // ������
            {
                is_razer = false;
            }
            else // �����
            {
                answer++;
                num_bar--;
            }

        }
    }
    return answer;
}