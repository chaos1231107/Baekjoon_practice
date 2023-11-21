#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main(){
    int n,m;
    //const int MAX = 10000;
    int cnt = 0;
    cin >> n >> m;
    string *s = new string[n];
    string *estimate_str = new string[m];

    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    for (int i = 0; i < m; i++){
        cin >> estimate_str[i];
    }
    unordered_set<string> stringSet(s, s+n);

    for (int i = 0; i < m; i++){
        if(stringSet.find(estimate_str[i]) != stringSet.end()){ // S에 estimated_str 배열의 원소가 포함되어 있을때
            //find() 주어진 문자열이 s(undordered_set)에 있는지 확인 , 해당요소를 가리키는 iterator 반복
            //stringSet(s)에 estimate_str[i]가 존재하지 않으면, stringSet.end()반환
            cnt++;
        }
    }
    cout << cnt << endl;

    delete[] s;
    delete[] estimate_str;
}