#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
// 문자열 길이 비교 및 사전식 정렬
bool compare(string a, string b){
    if (a.length() == b.length()){
        return a < b;
}
    return a.length() < b.length();
}

int main(){
    vector<string> string_arr;
    int n;
    string word;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> word;
        string_arr.push_back(word);
    }

    sort(string_arr.begin(), string_arr.end(), compare);
    string_arr.erase(unique(string_arr.begin(), string_arr.end()), string_arr.end()); // 중복제거

    for (int i = 0; i < n; i++){
        cout << string_arr[i] << "\n";
    }

}