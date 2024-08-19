#include <bits/stdc++.h>

using namespace std;

int main()
{
    int min_m = -1; // 최소 생성자를 찾기 위한 변수

    int target; // 입력된 n을 정수로 변환
    cin >> target;

    // 생성자 m의 범위를 0부터 target까지 고려
    for (int i = max(1, target - 1000); i < target; i++)
    {
        int num = i;
        int m_sum = 0;

        // num의 자릿수 합 계산
        while (num > 0)
        {
            m_sum += num % 10;
            num /= 10;
        }

        // m_sum과 i를 더하여 target과 비교
        if (i + m_sum == target)
        {
            if (min_m == -1 || i < min_m)
            {
                min_m = i;
            }
        }
    }

    // 생성자가 존재하지 않을 때 0 출력
    cout << (min_m == -1 ? 0 : min_m) << endl;

    return 0;
}