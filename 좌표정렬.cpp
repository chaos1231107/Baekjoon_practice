#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    int xi,yi;
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

    sort(combined_array.begin(), combined_array.end());

    for (int i = 0; i < n; i++){
        cout << combined_array[i].first << " " << combined_array[i].second << "\n";
    }

}