#include<bits/stdc++.h>
using namespace std;

int n, s, m;

void solve(){
  cin >> n >> s >> m;
  if (n < m || n * 6 < m * 7) {
    cout << "-1\n";
    return;
  }
  cout << (m * s + n - 1) / n << endl;
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}