#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

int n;
vector<int> a;

long long calculate (long long s) {
  for(int i = 0; i < n; i++){
    s += a[i] * i % mod;
    s %= mod;
  }
  return s;
}
void solve() {
  cin >> n;
  a.assign(n, 0);
  for (auto &i:a) cin >> i;
  sort(a.begin(), a.end());
  cout << calculate(0) << endl;
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}