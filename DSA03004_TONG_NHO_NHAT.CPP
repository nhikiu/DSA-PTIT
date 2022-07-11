#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

int n;
vector<int> digit;

void input(){
  cin >> n;
  digit.assign(n, 0);
  for (auto &i:digit) cin >> i;
  sort(digit.begin(), digit.end());
}

long long calculate(long long s, int l){
  for (int i = l; i < n; i += 2) s = s*10 + digit[i];
  return s;
}

int main(){
  int t; cin >> t;
  while(t--){
    input ();
    cout << calculate(0, 0) + calculate(0, 1) << endl;
  }
  return 0;
}