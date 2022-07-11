#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, s;

void solve(){
  cin >> n >> k;
  a.assign(n+1, 0);
  s.assign(n+1, 0);
  for(int i = 1; i <= n; i++) cin >> a[i];
  sort(a.begin(), a.end());
  for(int i = 1; i <= n; i++) s[i] = s[i - 1] + a[i];
  cout << max(s[n] - 2 * s[k], s[n] - 2 * s[n - k]) << endl;
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}