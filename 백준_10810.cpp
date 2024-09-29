#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    vector<int> arr(101,0);
    int a,b,c;
    
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        for (int k = a; k <= b; k++)
        {
            arr[k] = c; //i번 부터 j까지 k번 번호가 적혀져 있는 공을 넣음
        }
    }
    for (int i = 1; i <=n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}