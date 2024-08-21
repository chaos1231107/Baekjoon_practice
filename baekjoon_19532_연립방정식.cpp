#include <bits/stdc++.h>

using namespace std;

bool is_first_true(int a, int b, int c, int x, int y) 
{
    return (a * x + b * y == c);
}

bool is_second_true(int d, int e, int f, int x, int y) 
{
    return (d * x + e * y == f);
}

int main() 
{
    int a, b, c;
    int d, e, f;

    cin >> a >> b >> c >> d >> e >> f;

    bool flag = false;

    for (int x = -999; x <= 999; x++) 
    {
        for (int y = -999; y <= 999; y++) 
        {
            if (is_first_true(a, b, c, x, y) && is_second_true(d, e, f, x, y))
            {
                cout << x <<" "<< y;
                flag != flag;
                break; 
            }
        }
        if (flag) 
        {
            break; 
        }
    }
    return 0;
}