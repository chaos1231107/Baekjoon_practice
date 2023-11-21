#include <iostream>

using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == -1) break;

        int sum = 0;
        bool flag = false;

        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        if (sum == n) {
            flag = true; // flag를 true로 전환
            cout << n << " = 1";
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    cout << " + " << i;
                }
            }
            cout << endl; // 출력 버퍼를 지우고 새로운 줄로 이동
        }

        if (!flag) {
            cout << n << " is NOT perfect." << endl; //flag가 여전히 false 이면
        }
    }

    return 0;
}
