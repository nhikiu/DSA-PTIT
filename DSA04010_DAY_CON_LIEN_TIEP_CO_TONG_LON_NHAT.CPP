#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a, s;

void init(){
  cin >> n;
  a.assign(n+1, 0);
  s.assign(n+1, 0);
  for(int i = 1; i <= n; i++){
    cin >> a[i];
    s[i] = s[i-1] + a[i];
  }
}

void solve(){
  int res = *max_element(s.begin(), s.end());
  for(int i = 2; i <= n; i++)
    for(int j = 1; j < i; j++)
      res = max(res, s[i] - s[j]);
  cout << res << endl;
}

int main () {
  int t;
  cin >> t;
  while(t--){
    init();
    solve();
  }
  return 0;
}