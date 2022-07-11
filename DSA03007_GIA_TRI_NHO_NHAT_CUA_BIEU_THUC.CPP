#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

vector<long long> a, b;
int n;

void solve(){
  cin >> n;
  a.assign(n, 0);
  b.assign(n, 0);
  for (auto &i:a) cin >> i;
  for (auto &i:b) cin >> i;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end(), greater<long long>());
  long long sum = 0;
  for(int i = 0; i < n; i++) sum += a[i]*b[i];
  cout << sum << endl;
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}