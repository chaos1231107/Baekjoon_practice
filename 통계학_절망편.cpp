#include <bits/stdc++.h>

using namespace std;

int main(){
   int n;
   double elem; // 통계값을 계산할 숫자들
   vector<double> v;
   double sum = 0;
   //int n;
   double avg = 0;
   double mid = 0;
   double mod = 0;
   double range = 0;
   int max_freq = 0;
   cin >> n;
   unordered_map<double, int> freq_map;
   for (int i = 0; i < n; i++){
       cin >> elem;
       v.push_back(elem);
       freq_map[elem]++;
   }
   
   for (int i = 0; i < n; i++){
       sum += v[i];
   }
   avg = sum / (double)n; // 산술평균
   avg = round(avg);
   
   sort(v.begin(), v.end());
   
   if (n == 1){
       mid = v[0];
   }
   else {
       mid = v[(n-1)/2]; // 중앙값
   }
   
   for (const auto& pair : freq_map){
       if (pair.second > max_freq){
           max_freq = pair.second;
           mod = pair.first;// 숫자와 발생빈도로 짝을 지어서 최빈값 탐색 
       }
   }
   
   range = v[n-1] - v[0]; // 범위: 가장큰값과 작은 값의 차이
   
   cout << avg << '\n' << mid << '\n' << mod << '\n' << range;
   
}