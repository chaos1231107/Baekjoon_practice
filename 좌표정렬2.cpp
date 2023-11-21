#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b){
    if (a.second != b.second){
        return a.second < b.second;
    }
    else{
        return a.first < b.first;
    }
}


int main(){
    int n;
    int xi, yi;
    cin >> n;
    vector<int> x_arr(n);
    vector<int> y_arr(n);

    for (int i = 0; i < n; i++){
        cin >> xi >> yi;
        x_arr[i] = xi;
        y_arr[i] = yi;
    }

    vector<pair<int, int> > combined_array;
    for (int i = 0; i < n; i++){
        combined_array.push_back(make_pair(x_arr[i], y_arr[i]));
    }

    sort(combined_array.begin(), combined_array.end(), compare);

    for(const auto& p : combined_array){
        cout << p.first << " " << p.second << "\n";
    }
}