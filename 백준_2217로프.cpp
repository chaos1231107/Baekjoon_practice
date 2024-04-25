#include <bits/stdc++.h>

using namespace std;
bool compare(int a, int b){
    return a > b;
}

int main(){
    int n;
    //int rope;
    int w;
    cin >> n;
    vector<int> rope;
    
    
    for (int i = 0; i < n; i++){
        cin >> w;
        rope.push_back(w);
    }
    sort(rope.begin(), rope.end(), compare);
    
    int max_w = rope[n-1]; //최대중량
    int w_sum = 0; //현재중량
    for (int i = 0; i < n; i++){
        w_sum = rope[i] * (i+1);
        if (w_sum > max_w){
            max_w = w_sum;
        }
    }
    cout << max_w;
}