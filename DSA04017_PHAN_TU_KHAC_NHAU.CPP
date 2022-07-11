#include<bits/stdc++.h>
using namespace std;

int n;
vector<long long> a, b;

void solve(){
  cin >> n;
  a.assign(n, 0);
  b.assign(n-1, 0);
  for (auto &i:a) cin >> i;
  for (auto &i:b) cin >> i;
  for(int i = 0; i < n; i++)
    if (a[i] != b[i]){
      cout << i+1 << endl;
      return;
    }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}