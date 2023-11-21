#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string n; //자릿수를 정렬할 숫자
    cin >> n;

    sort(n.begin(), n.end(), greater<char>());

    cout << n << endl;

}