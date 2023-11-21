#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(){
    int num1, num2; //대칭차집합의 원소개수
    cin >> num1 >> num2;
    set <int> set1, set2;

    for (int i = 0; i < num1; i++){
        cin >> num1;
        set1.insert(num1);
    }

    for (int i = 0; i < num2; i++){
        cin >> num2;
        set2.insert(num2);
    }

    set <int> res1, res2;
    set_difference(set1.begin(),set2.begin())





}
