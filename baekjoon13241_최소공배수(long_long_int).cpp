/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

long long int get_gcd (long long int a, long long int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long int get_lcm(long long int a, long long int b)
{
    return a * b / get_gcd(a, b);
}
int main()
{
    long long int num1, num2;
    long long int res = 0;
    
    cin >> num1 >> num2;
    res = get_lcm(num1, num2);
    
    cout << res;
    
    return 0;
}