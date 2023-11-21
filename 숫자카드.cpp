#include <iostream>
#include <unordered_set> // 중복 체크

using namespace std;

int main() {
    int n, m;
    cin >> n;
    int *arr1 = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i]; // 첫번째 카드의 숫자를 입력 받아 배열에 저장
    }

    cin >> m;
    int *arr2 = new int[m];

    for (int j = 0; j < m; j++) {
        cin >> arr2[j]; // 두번째 카드의 숫자를 입력 받아 배열에 저장
    }

    // 중복 원소 체크 --> unordred_set 사용
    unordered_set<int> hashSet;
    for (int i = 0; i < n; i++) {
        hashSet.insert(arr1[i]);
    }

    int *result = new int[m];
    for (int j = 0; j < m; j++) {
        if (hashSet.find(arr2[j]) != hashSet.end()) {
            result[j] = 1;
        } else {
            result[j] = 0;
        }
    }

    // 배열 요소를 공백으로 구분하여 출력
    for (int i = 0; i < m; i++) {
        cout << result[i]; // 공백으로 구분하지 않고 출력
        if (i != m - 1) {
            cout << " "; // 마지막 요소 이전에만 공백을 추가
        }
    }
    cout << endl; // 모든 요소를 출력한 후 개행

    delete[] arr1;
    delete[] arr2;
    delete[] result;

    return 0;
}
