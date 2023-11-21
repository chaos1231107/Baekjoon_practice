#include <iostream>

using namespace std;

int gcd(int a, int b){
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int lcm(int a, int b){
        return a * b / gcd(a,b);
    }

int main(){
    int t;
    int a,b;
    int *arr = new int[t];

    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b;
        int result = lcm(a,b);
        arr[i] = result;
    }

    for (int i = 0; i < t; i++){
        cout << arr[i] << endl;
    }

    delete[] arr;
}