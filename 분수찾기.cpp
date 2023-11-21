#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; // 회원의 수
    cin >> n;

    vector<pair<int, pair<int, string> > > member_info; // pair를 사용하여 두 배열을 묶음

    for (int i = 0; i < n; i++) {
        int age;
        string name;
        cin >> age >> name;
        member_info.push_back(make_pair(age, make_pair(i, name))); // pair에 나이, 순서, 이름을 묶어서 추가
    }

    // pair를 나이를 기준으로 오름차순 정렬
    sort(member_info.begin(), member_info.end());

    // 정렬된 회원 정보 출력
    for (int i = 0; i < n; i++) {
        cout << member_info[i].first << " " << member_info[i].second.second << endl;
    }

    return 0;
}
