#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string name;

    vector<string> v1;
    vector<string> v2;

    // 듣도 못한 사람 입력
    for (int i = 0; i < n; i++){
        cin >> name;
        v1.push_back(name);
    }
    
    // 보도 못한 사람 입력
    for (int i = 0; i < m; i++){
        cin >> name;
        v2.push_back(name);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    vector<string> v3;
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v3));

    // 공통된 요소의 개수 출력
    cout << v3.size() << endl;

    // 공통된 요소 출력
    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << '\n';
    }

    return 0;
}
