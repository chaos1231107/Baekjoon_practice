#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int x, y;
    int w, h;
    int d1, d2, d3, d4;
    int d_ary[100];
    int min = INT_MAX;
    cin >> x >> y >> w >> h;
    
    d1 = y;
    d2 = x;
    d3 = h - y;
    d4 = w - x;
    
    d_ary[0] = d1;
    d_ary[1] = d2;
    d_ary[2] = d3;
    d_ary[3] = d4;
    //sort(d_ary, d_ary + 4);
    for (int i = 0; i < 4; i++){
        if (d_ary[i] < min){
            min = d_ary[i];
        }
    }
    cout << min;
    //cout << d_ary[0];
    return 0;
}
