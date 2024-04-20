#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    int *arr1 = new int[n]; // 가지고 있는 숫자카드의 수를 저장하는 배열
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    
    cin >> m;
    int *arr2 = new int[m]; // 카드에 적혀있는 수를 저장하는 배열
    
    for (int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    
    int *arr3 = new int[m]; // 각 카드에 대해 일치하는 숫자의 개수를 저장하는 배열
    for (int i = 0; i < m; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr2[i] == arr1[j]) {
                cnt++;
            }
        }
        arr3[i] = cnt;
    }

    for (int i = 0; i < m; i++){
        cout << " " << arr3[i];
    }

    delete[] arr2;
    delete[] arr1;
    delete[] arr3;
}
