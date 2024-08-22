#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    for (int start = 0; start < n; start++)
    {
        int partial_sum = 0;
        for (int end = start; end < n; end++)
        {
            partial_sum += v[end];
            if (partial_sum == m)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
}


